#include <iostream>
using namespace std;

int main()
{
	//Stating Variable Age
	int age;
	
	cout<<"Program to Know What Your Age Next Year and Last Year"<<endl;
	
	//Asking User to Input to Age and Input The Value to Variable Age
	cout<<"Input Your Age = "<<endl;
	cin>>age;
	
	//Stating or make Sure The Age Now
	cout<<"Your Age Now is "<<age<<endl;
	
	//Increament of age ( addition 1 )
	cout<<"Your Age Next Years is = "<<++age<<endl;
	
	//Double Decreament cause age already +1 and to make it 1 year before first increment than we must decreasing age to -2 by double decreament ( -----age )
	cout<<"Your Age Last Years is = "<<----age<<endl;
	
	return 0;
}