#include <iostream>
using namespace std;

int main()
{
	//Stating Variable
	float length,width,area,perimeter;
	
	
	cout<<"Program to Calculating Area and Perimeter of Rectangle "<<endl;
	
	//Asking to Input Width and input the value to Variable width
	cout<<"Input Witdh";
	cin>>width;
	
	//Asking to Input Length and input the value to Variable length
	cout<<"Input Length";
	cin>>length;
	
	//Stating The Formula of perimeter and area of Rectangle
	perimeter = 2*(length+width);
	area = length*width;
	
	//Outputting
	cout<<"The Area of the Rectangle is "<<area<<endl;
	cout<<"The Perimeter of the Rectangle is "<<perimeter<<endl;
	
	return 0;
	
}