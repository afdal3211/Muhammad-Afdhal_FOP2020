#include <iostream>
using namespace std;

int main ()
{
	cout<<"Program to Calculate Celcius to Fahrenheit"<<endl;
	
	//Stating Variable ( Celcius ) and Asking User to Input Temperature in Celcius
	int celcius;
	cout<<"Input The Temperature in Celcius"<<endl;
	cin>>celcius;
	
	//Stating Variable + formula of Fahrenheit and outputting
	float fahrenheit;
	fahrenheit = 9.0/5*celcius + 32;
	cout<<"The Temperatur of "<<celcius<<" to Fahrenheit is = "<<fahrenheit<<endl;
	
	return 0;
	
}