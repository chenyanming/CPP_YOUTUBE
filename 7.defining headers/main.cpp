#include <iostream>
#include "sayhello.h" // 调用了sayhello.h, 里面有sayhello函数的定义
#include "sayhelloworld.h" //调用了sayhelloworld.h，里面也调用了sayhello.h, 也就是两次调用了，sayhello.h属于多次调用，因此要定义为multiple types.

using namespace std;

int main()
{
  sayhelloworld();
  return 0;
}