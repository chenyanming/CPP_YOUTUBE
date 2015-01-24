#include <iostream>

using namespace std;

class cat
{
public:
	int Age;
};

void DoSetAge(cat *pCat, int mAge)
{
	pCat->Age = mAge;
	cout << pCat->Age << " set at " << pCat <<endl;
}

int main()
{
//Start: create a pointer
	cat *mCat = new cat;
//1. set the cat class's Age = 9 and print out
	mCat->Age = 9;
	cout << mCat->Age << " at " << mCat <<endl;
//2. pass the pointer to a function and set Age
	DoSetAge(mCat, 12);
//3. print out the class's Age
	cout << mCat->Age << " at " << mCat <<endl;
//Summary: it is the same value, we don't need to know whether to use by value or by reference.

	delete mCat;
	return 0;
}