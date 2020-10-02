#include <iostream>
using namespace std;

int main()
{
	//deiciding variable
	int weight ; 
	float height, bmi;
	
	cout<<"==========================="<<endl;
	cout<<"Program to find out our BMI"<<endl;
	cout<<"==========================="<<endl;
	
	//asking user to input weight and heigh
	//=======================================
	cout<<"Input Your Weight : ";
	cin>>weight;
	
	cout<<"Input Your Height ( in Meter ): ";
	cin>>height;
	//=======================================
	
	
	//calculating bmi
	bmi = weight / ( height*height );
	
	
	//making condition wether the user is obesity, overweight, normal or underweight
	if( bmi > 30){
		cout<<"Your BMI is "<<bmi<<" and You are now == Obesity == , please do extra diet";}
	else if ( bmi >= 25 && bmi <30 ){
		cout<<"Your BMI is "<<bmi<<" and You are now == Overweight== , Please do diet";}
	else if ( bmi >= 18.5 && bmi <25){
		cout<<"Your BMI is "<<bmi<<" and You are now == Normal == , Keep it :D ";}
	else
		cout<<"Your BMI is "<<bmi<<" and You are now == Underweight == please eat more :D";
	
	return 0;
}