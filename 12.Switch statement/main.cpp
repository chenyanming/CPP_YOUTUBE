#include <iostream>

using namespace std;

int main()
{
  int i = 1;
  int j = 99;
  switch(i)
  {
    case 1:
      cout << "one" << endl;
      if (j>0)
      {
	cout << "j>0" << endl;
      }
      break;
    case 2:
      cout << "two" << endl;
      break;
    default:
      cout << "three" << endl;
      break;
  }
}