#include <math.h>
#include<iostream>
using namespace std;

int main()
{
	//Stating Variable
	float r, phi, volume,surface;
	
	cout<<"Program for Calculating Volume and Surface Area of Sphere"<<endl;
	
	//Asking and Input the value of radius to variable r
	cout<<"Input The Radius = "<<endl;
	cin>>r;

	//Stating Phi and Formula of Volume and Surface area of Sphere
	phi = 3.14;	
	volume = 4/3*phi*pow(r, 3);
	surface = 4*phi*pow(r, 2);
	
	//Output
	cout<<"Volume From The Radius = "<<r<<" is "<<volume<<endl;
	cout<<"The Surface Area From The Radius = "<<r<<" is "<<surface<<endl;
	
	return 0;
}