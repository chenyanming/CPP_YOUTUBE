#include <iostream>

using namespace std;

class fridge
{
public:
	int Temp;
};

class truck
{
	int Gas;
public:
	int Speed;
	int getGas()
	{
		return Gas;
	}
	void setGas(int mGas)
	{
		Gas = mGas;
	}
//it's private to the class, but is available to all classes that inherit form it. We can't access it outside the class
protected:
	bool HasFreeon;
};

//1. inherit both the truck class and firdge class
//public keyword: inherit the public porpertity
class freezertruck: public truck, public fridge
{
public:
	void setFreeon()
	{
		this->HasFreeon = true;
	}
};

int main()
{
	freezertruck mTruck;
	mTruck.Speed = 100;
	mTruck.Temp = 20;
	cout << mTruck.Speed << endl;//2. inherit the public Speed
	cout << mTruck.Temp << endl;

	mTruck.setGas(200);
	cout << mTruck.getGas() << endl;//can't inherite private variable "Gas".

	mTruck.setFreeon();//3. access the protected part in the inherited class

	return 0;
}

//Summary:
//1. a class can inherit other classes
//2. it can inherit the public and protected
//3. but the protected can only access in the inherited classes and class itself