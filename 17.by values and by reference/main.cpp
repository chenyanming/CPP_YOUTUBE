#include "iostream"
#include "string"
 
using namespace std;

//int printnumber(int number)//by value
int printnumber(int &number)//by reference
{
	cout << "step 1: " << number << endl;
	number++;
	cout << "step 2: " << number << endl;
}


int main()
{
	int Mynum = 1;
	printnumber(Mynum);
	cout << "step 3: " << Mynum << endl;
	return 0;
}