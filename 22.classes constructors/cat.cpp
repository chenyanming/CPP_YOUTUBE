#include "cat.h"
#include <iostream>

using namespace std;

cat::cat(void)
{
	cout << "create class" << endl;
	//setAge(17);//3. initialize the value in the default constructor
}

/*
**second constructor, we can have multiple constructors
*/
cat::cat(int mAge)
{
	cout << "create class with age" << endl;
	setAge(mAge);
}

cat::~cat(void)
{
}

int cat::getAge()
{
	return Age;
}

void cat::setAge(int mAge)
{
	Age = mAge;
}