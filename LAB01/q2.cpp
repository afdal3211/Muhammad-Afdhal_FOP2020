#include<iostream>
using namespace std;

int main()
{
  //Stating Variable 
	int r, area, circumference;
	double phi;
	
	//Stating Value of Variable 
  r = 10;
	phi = 3.14;
	
  //Stating the Formula of Area and circumference of a Cricle
	circumference = 2*phi*r;
	area = phi*r*r;
	
  //Output
	cout<<area<<endl;
	cout<<circumference;
	
  //Returning to int main()
	return 0;
}