#include <iostream>
using namespace std;

int main ()
{
	//deciding Variable
	int age;
	
	cout<<"================================="<<endl;
	cout<<"Program to check the Stage of Age"<<endl;
	cout<<"================================="<<endl;
	
	//Asking User to input age than it will be saved in variable age
	cout<<"Input Your Age : ";
	cin>>age;
	
	//making conditional wether user is child, teenager or adult
	if(age >= 0 && age <12)
	{
		cout<<"You are a Child Now";
	}
	else if(age >= 12 && age < 18)
	{
		cout<<"You are a Teenager Now";	
	}
	else
	cout<<"You are Adult Now";
	
	return 0;
}