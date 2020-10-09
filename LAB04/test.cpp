#include <iostream>
 using namespace std;

 int main()
 {
 int balance;

 balance = 1000;

 while(true)
 {
 if(balance<9)
 continue;
 balance = balance -9;
 }

 cout << "Balance is "<<balance;

 return 0;
}