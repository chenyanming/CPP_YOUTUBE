#include <iostream>

using namespace std;

void Test(int *mynum)//it takes the pointer
{
	cout << "mynum = " << mynum << endl;
	cout << "*mynum = " << *mynum << endl;
}
int main()
{
	int *mNumber = new int;//creat a variable exists on heap out of memory somewhere
	*mNumber = 2;
	cout << mNumber << endl;//the value will change every time we run the program, because the heap will allocate the memmory we run it.
	cout << *mNumber << endl;
	//Test(*mNumber);//we can't pass the value
	Test(mNumber);
	delete mNumber;//avoid the memory leak
	return 0;
	//we can pass the value and reference, but why we need pointer.
	//When we choose the object-oriented programming, we will make an object throw up memory somewhere. And the code will jump into a different execution context. And what happens with that, if you need to still reference that variable you throw up memory
}