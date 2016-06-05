// member initialization
#include <iostream>
using namespace std;

class Circle {
    double radius;
    const double PI = 3.14159265;
  public:
    Circle(double r) : radius(r) { }
    double area() {return radius*radius*PI;}
};

class Cylinder {
    Circle base;
    double height;
  public:
    Cylinder(double r, double h) : base (r), height(h) {}
    double volume() {return base.area() * height;}
};

int main () {
  Cylinder foo (10,20);

  cout << "foo's volume: " << foo.volume() << '\n';
  return 0;
}

// The only difference between a class and a struct is that
// members fo a class are private by default and members of a 
// struct are public by default