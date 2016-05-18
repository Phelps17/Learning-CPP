#ifdef IntArrayRC_H
#define IntArrayRC_H
#include "IntArray.h"

class IntArrayRC: public IntArray { //this line shows inheritence

//define only the parts that are different or in addition to IntArray
public:
	//needs its own set of init functions (constructors)
	IntArrayRC(int size = DefaultArraySize);
	IntArrayRC(int *array, int array_size);
	IntArrayRC(const IntArrayRC &rhs);

	//needs its own range-checking subscript operator
	virtual int& operator[] (int);

private:
	//raneg checking isnt part of the public interface so we need to declare it here
	void check_range(int);

};
#endif

