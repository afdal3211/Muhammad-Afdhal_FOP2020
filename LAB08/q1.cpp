#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
	double x; //variable for the number
	double degree; //variable for degree formula
	double radian; //variable for radian formula
	
	//making formula for radian and degree
	radian = M_PI/180;
	degree = 180/M_PI;
	
	//===============================================================//
	//number 1, finding trigonometric value ( trigono(number * radian)
	
	cout<<"======================================================="<<endl;
	cout<<"                Exercise 1 Part 1                      "<<endl;
	cout<<"           Finding Trigonometry Number                 "<<endl;
	cout<<"======================================================="<<endl;
	
	//sin 37
	x = 37;
	cout<<"The Value of sin "<<x<<" is "<<sin(x*radian)<<endl;
	
	//cos 53
	x = 53;
	cout<<"The Value of cos "<<x<<" is "<<cos(x*radian)<<endl;
	
	//tan 60
	x = 60;
	cout<<"The Value of tan "<<x<<" is "<<tan(x*radian)<<endl<<endl;
	
	cout<<"======================================================="<<endl<<endl<<endl<<endl;
	
	
	//===============================================================//
	//finding Arc of trigonometry and square root
	
	cout<<"======================================================="<<endl;
	cout<<"                Exercise 1 Part 2                      "<<endl;
	cout<<"        Finding Arcus Trigonometry Number              "<<endl;
	cout<<"======================================================="<<endl<<endl;
	
	//aSin 0.58
	x = 0.58;
	cout<<"The Value of Asin "<<x<<" is "<<asin(x)*(degree)<<endl;
	
	//Acos 0.29
	x = 0.29;
	cout<<"The Value of Acos "<<x<<" is "<<acos(x)*(degree)<<endl;
	
	//atan 0.72
	x = 0.72;
	cout<<"The Value of Atan "<<x<<" is "<<atan(x)*(degree)<<endl;
	
	// square root of 156-12
	cout<<sqrt(156-12)<<endl<<endl;
	
	cout<<"======================================================="<<endl<<endl<<endl<<endl;
	
	//===============================================================//
	//looking Value of y = 2x^2 - x + 7, for x = ( 0 < x < 5 )
	
	cout<<"======================================================="<<endl;
	cout<<"                Exercise 1 Part 3                      "<<endl;
	cout<<"             Finding Polynomial Value                  "<<endl;
	cout<<"======================================================="<<endl<<endl;
	
	int y;
	
	for(int x1=1;x1<5;x1++){
		y = 2*pow(x1, 2) - x1 + 7;
		cout<<"The Value of Y for X = "<<x1<<" is "<<y<<endl;
	}
	cout<<endl;
	
	cout<<"======================================================="<<endl<<endl<<endl<<endl;
	
	//===============================================================//
	//ceiling and flooring using ceil(variable) & floor(variable)
	
	cout<<"======================================================="<<endl;
	cout<<"                Exercise 1 Part 4                      "<<endl;
	cout<<"              Flooring and Ceilling                    "<<endl;
	cout<<"======================================================="<<endl<<endl;
	
	//5.89
	cout<<"from "<<5.89<<endl<<"The round up is "<<setw(5)<<"| "<<ceil(5.89)<<" | "<<endl<<"The Round down is "<<setw(3)<<"| "<<floor(5.89)<<" |"<<endl;
	
	//7.2
	cout<<"from "<<7.2<<endl<<"The round up is "<<setw(5)<<"| "<<ceil(7.2)<<" | "<<endl<<"The Round down is "<<setw(3)<<"| "<<floor(7.2)<<" |"<<endl;
	
	//12.05
	cout<<"from "<<12.05<<endl<<"The round up is "<<setw(5)<<"| "<<ceil(12.05)<<" | "<<endl<<"The Round down is "<<setw(3)<<"| "<<floor(12.05)<<" |"<<endl;
	
	//0.03
	cout<<"from "<<0.03<<endl<<"The round up is "<<setw(5)<<"| "<<ceil(0.03)<<" | "<<endl<<"The Round down is "<<setw(3)<<"| "<<floor(0.03)<<" |"<<endl<<endl;
	
	cout<<"======================================================="<<endl;
	
}