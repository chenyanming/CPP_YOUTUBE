//Put the code file in the implementation file
//one file cares about the implementation
//that's why people only give you the head files
#include "cat.h"
#include <iostream>

using namespace std;

//You actually access the "cat" namespace
cat::cat(void)
{
	cout << "create class" << endl;
}

cat::~cat(void)
{
	//cout << "create class" << endl;//don't do that (don't access it), the deconstuctor is used to release resources
}

int cat::getAge()
{
	return Age;
}

void cat::setAge(int mAge)
{
	Age = mAge;
}