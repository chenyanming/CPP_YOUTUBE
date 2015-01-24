#include <iostream>
#include "cat.h"
using namespace std;

int main()
{
	/*
	cat mCat;
	mCat.setAge(10);

	cat *zCat = new cat;
	zCat->setAge(9);

	cout << mCat.getAge() << endl;
	cout << zCat->getAge() << endl;

	delete zCat;
	return 0;
	*/

	/*
	//1. initialize the value with pointer
	cat *zCat = new cat(22);//create class with age
	cout << zCat->getAge() << endl;
	delete zCat;
	return 0;	
	*/

	//2. initialize the vlue with normal class
	cat mCat(33);
	cout << mCat.getAge() << endl;
}