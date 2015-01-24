#include <iostream>

using namespace std;

int main()
{
  int line[5] = {1,2,3,4,5};
  int line1[5];
  line1[0] = 5;
  line1[1] = 3;
 // line[2] = 9;
  line1[3] = 7;
  line1[4] = 8;
  cout << "Person 2 has " << line[2] << "$" << endl;
  cout << "Person 8 has " << line[8] << "$" << endl;//line[8]已经超出array的范围了，一样可以编译运行
  cout << "Person 2 has " << line1[2] << "$" << endl;//line1[2]没有定义，一样可以编译运行
  return 0;
}