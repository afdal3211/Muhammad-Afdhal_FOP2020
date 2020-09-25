#include<iostream>
using namespace std;

int main()
{
	//deciding Variable for the input, which is "hour"
	int hour;
	
	//Asking User to input any number of hour than input to variable "hour"
	cout<<"What Time is it ? "<<endl;
	cin>>hour;
	
	//Making Conditional
	
	//if number are greater or same with 0 and lower than 12 means Morning
	if( hour >= 0 && hour <12 )
	{
		cout<<"Good Morning";
	}
	if ( hour >= 12 && hour <18 )
	{
		// ^ if number are greater or same with 12 and lower than 18 means Afternoon
		cout<<"Good Afternoon";
	}
	if ( hour >= 18 && hour <24)
	{
		// ^ if number are greater or same with 0 and lower than 12 means Nigh/Greating for evening
		cout<<"Good Evening";	
	}
	
	//other than it ( more than 24 ), Say Error
	else
	{
		cout<<"Error";	
	}	
	return 0;
}