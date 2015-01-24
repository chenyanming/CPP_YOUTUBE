#include <iostream>
#include "functions_header-files.h"
using namespace std;

int GetAge(); // function prototype，because it has the signature of the function, but it has no body, no code

int main()
{
  int age;
  age = GetAge();
  cout << age << endl;
  return 0;
}

