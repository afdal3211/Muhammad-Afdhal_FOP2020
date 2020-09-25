#include <iostream>
using namespace std;

int main()
{
	//Deciding Variable to input which are "number"
	int number;
	
	//Giving Instruction to input any number than put the input to variable "number"
	cout<<"Program To Decide Wheters the Number is ODD or EVEN"<<endl;
	cout<<"Masukkan Sembarang Angka ="<<endl;
	cin>>number;
	
	//Making Conditionanl, if number can be devide by 2 ( modulus 0 ) means its Even number, and another number ( not including in its say its odd number
	if(number%2 == 0)
	{
		cout<<"Its Even Number";
	}
	else
	{
		cout<<"Its Odd Number";
	}
	
	return 0;
}