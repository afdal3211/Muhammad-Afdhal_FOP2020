#include <iostream>
using namespace std;
//Declaring Universal variale ( especially for choosing variable )
int choice;
char choices;

//function result of convertin celcius to fahrenheit 
double result_f(double ctof){
	return ( ctof * 9/5)+32;
}

//function result of convertin  fahrenheit to celcius
double result_c(double ftoc){
	return ( ftoc -32)*5/9;
}

//menu converting to fahrenheit
void toFahrenheit(){
	double tempc;
	cout<<endl<<endl;
	cout<<"You Enter Celcius to Fahrenheit Menu"<<endl;
	cout<<"Input Temperatur ( Celcius ) = ";
	cin>>tempc;
	cout<<"Temperatur from "<<tempc<<" is Equal to "<<result_f(tempc)<<" Fahrenheit"<<endl;
}

//menu converting to Celcius
void toCelcius(){
	double tempf;
	cout<<endl<<endl;
	cout<<"You Enter Celcius to Fahrenheit Menu"<<endl;
	cout<<"Input Temperatur ( Fahrenheit ) = ";
	cin>>tempf;
	cout<<"Temperatur from "<<tempf<<" is Equal to "<<result_c(tempf)<<" Celcius"<<endl;
}

//main menu
void main_menu(){
	cout<<endl<<endl;
	cout<<"Welcome to LAB10 Part 2"<<endl;
	cout<<"Select Menu"<<endl;
	cout<<"1.Converting Celcius to Fahrenheit"<<endl;
	cout<<"2. Converting Fahrenheit to Celcius"<<endl;
	cout<<"Select Menu ( Type 1 or 2 ) = ";
	cin>>choice;
	//making case ( switch ) to user to enter which menu
	switch(choice){
		//case user want to enter converting Celcius to Fahrenheit
		case 1:
			do{
			toFahrenheit();
			cout<<"Wanna Converting more ? "<<endl;
			cout<<"( m = go to menu, y = more converting, n = exit "<<endl;
			cout<<"Type ( m / y / n )";
			cin>>choices;
			if(choices == 'm' || choices == 'M'){
				main_menu();
				//goto line 38
			}
			else if(choices == 'y' || choices == 'Y'){
				toFahrenheit();
				//goto line 18
			}
			}while(choices != 'n' || choices != 'N');
			cout<<"You Enter [n] or another word that cause exiting program "<<endl;
			cout<<"Thanks for using our Program";
			break;
			
		//case user want to enter converting Celcius to Fahrenheit
		case 2:
			do{
			toCelcius();
			cout<<"Wanna Converting more ? "<<endl;
			cout<<"( m = go to menu, y = more converting, n = exit "<<endl;
			cout<<"Type ( m / y / n )";
			cin>>choices;
			if(choices == 'm' || choices == 'M'){
				main_menu();
				//goto line 38
			}
			else if(choices == 'y' || choices == 'Y'){
				toCelcius();
				//goto line 28
			}
			else
				cout<<"You Typing  n  or another letter resulting to exit the program";
				break;
			}while(choices != 'n' || choices != 'N');
			cout<<"You Enter [n] or another word that cause exiting program "<<endl;
			cout<<"Thanks for using our Program";
			break;
			
	}
}

int main(){
	main_menu();
	//goto line 38;
}