#include <iostream>
using namespace	std;
/*
//1. create a template using a class
*/
class cat
{
private:
	int Age;
public:
	int Color;
	int getAge()//geter
	{
		return Age;
	}
	void setAge(int TheAge)//seter
	{
		Age = TheAge;
	}
};
//An object is an instance of the class
//access modifier: private, public

int main()
{
/*
//2. create instances of that template
*/
	cat gCat;
	cat bCat;//we can have multiple cats, that is the power of the object-oriented programming

	//mCat.Age = 17;//can't not access the private
	//mCat.Color = 18;//we can access the public
/*
//3. we can set their individual variables differently, so the template act differently
*/
	gCat.setAge(17);
	cout << gCat.getAge() << endl;


	bCat.setAge(18);
	cout << bCat.getAge() << endl;

	
	return 0;
}
