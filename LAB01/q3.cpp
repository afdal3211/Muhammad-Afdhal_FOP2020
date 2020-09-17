#include <iostream>
using namespace std;

int main()
{
  //Stating Variable + temp (for addtion variable to swapping between  a and b )
  int a = 7, b = 4, temp;

  cout<<"if a = 7 and b=4, it will be Swapped to :"<<endl;

  //Making formula to Swapping between a to b
  temp = a;
  a = b;
  b = temp;

  //output of the formula
  cout<<"a will swapped to b :"<<endl;
  cout<<"a = "<<a<< " and b = "<<b<<endl;

  //Returning
  return 0;
}