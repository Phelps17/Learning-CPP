#include <iostream>

class Foo {
public:
    friend std::ostream& operator<< ( std::ostream& output,
                                      Foo const & that )
    {
        return output << that._value;
    }
private:
    double _value;
};

int main( int argc, char **argv )
{
  Foo foo;
  std::cout << "Foo object: " << foo << std::endl;
  return 0;
}
