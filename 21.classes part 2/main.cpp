#include <iostream>
#include "cat.h"
using namespace std;

int main()
{
/*
** 对比mCat和zCat，两者区别就在于：
** 1. 普通的class需要.来访问，指针需要用->
** 2. 普通的放在stack，指针放在heap，可以释放
*/
	cat mCat;
	mCat.setAge(10);

	cat *zCat = new cat;
	zCat->setAge(1);//you should aware you should initialize a variable; here calls indirection

	cout << mCat.getAge() << endl;//on the stack
	cout << zCat->getAge() << endl;//on the heap
	//you need to understand how you are interfacing with the memory

	delete zCat;//remember
	return 0;
}