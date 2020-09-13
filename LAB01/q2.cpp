#include<iostream>
using namespace std;

int main()
{
	int r, area, circumference;
	double phi;
	
	r = 10;
	phi = 3.14;
	
	circumference = 2*phi*r;
	area = phi*r*r;
	
	cout<<area<<endl;
	cout<<circumference;
	
	return 0;
}