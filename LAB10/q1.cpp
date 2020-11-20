#include <iostream>
using namespace std;

//Declaring Universal variale ( especially for choosing variable )
int choice;
char choices;

//function prototype
void main_menu();

//Function Minimum 2 number ( can be integer or decimal )
double mini(double a,double b){
	if(a<b){
		return a;
	}
	else
		return b;
}
//Function Minimum 3 number ( can be integer or decimal )
double mini(double a, double b, double c){
  return min(mini(a, b), c);
}

//Function Maximum number ( can be integer or decimal )
double maxi(double a, double b){
	if(a>b){
		return a;
	}
	else
		return b;
}
 //Function Maximum number ( can be integer or decimal )
double maxi(double a, double b, double c)
{
  return max(maxi(a, b), c);
}

//function Menu for 2 integer
void menu_2integer(){
	//declaring variable input
	double num1;
	double num2;
	cout<<endl<<endl;
	cout<<"You're in Menu : Maximum and Minimum Between 2 Number"<<endl;
	cout<<"Input 1st Number ";
	cin>>num1;
	cout<<"Input 2nd Number ";
	cin>>num2;
	cout<<"The Minimum Number between "<<num1<<" and "<<num2<<" is "<<mini(num1,num2)<<endl;
	cout<<"The Maximum Number between "<<num1<<" and "<<num2<<" is "<<maxi(num1,num2)<<endl;
	
	//making user decision wheter want to try another number or go to main menu or exit program
	cout<<"Wanna Try another Number ?"<<endl;
	cout<<"( Y = Yes/Try Another max&min 3 number )"<<endl;
	cout<<"( M = Back to Main Menu"<<endl;
	cout<<"( N = No/Exiting Apps"<<endl;
	cout<<" Type Your Choice ( Y / M / N ) = ";
	cin>>choices;
	//condition if user want to try another number
	if(choices == 'Y' || choices == 'y'){
		menu_2integer(); 
		//goto line 39
	}
	//condition if user want to enter main menu
	else if(choices == 'M' || choices == 'm'){
		main_menu(); 
		//goto line 114
	}
	else
		cout<<"You're Typing N or another words that cause exiting program"<<endl;
		cout<<"Thank You for Using our Program";
}

//function Menu for 2 integer
void menu_3integer(){
	//declaring variable input
	double num1;
	double num2;
	double num3;
	cout<<endl<<endl;
	cout<<"You're in Menu : Maximum and Minimum Between 3 Number"<<endl;
	cout<<"Input 1st Number ";
	cin>>num1;
	cout<<"Input 2nd Number ";
	cin>>num2;
	cout<<"Input 3rd Number ";
	cin>>num3;
	cout<<"The Minimum Number between "<<num1<<" and "<<num2<<" is "<<mini(num1,num2,num3)<<endl;
	cout<<"The Maximum Number between "<<num1<<" and "<<num2<<" is "<<maxi(num1,num2,num3)<<endl;
	
	//making user decision wheter want to try another number or go to main menu or exit program
	cout<<"Wanna Try another Number ?"<<endl;
	cout<<"( Y = Yes/Try Another max&min 3 number )"<<endl;
	cout<<"( M = Back to Main Menu"<<endl;
	cout<<"( N = No/Exiting Apps"<<endl;
	cout<<" Type Your Choice ( Y / M / N ) = ";
	cin>>choices;
	//condition if user want to try another number
	if(choices == 'Y' || choices == 'y'){
		menu_3integer();
		//goto line 75
	}
	//condition if user want to enter main menu
	else if(choices == 'M' || choices == 'm'){
		main_menu();
		//goto line 114
	}
	else
		cout<<"You're Typing N or another words that cause exiting program"<<endl;
		cout<<"Thank You for Using our Program";
	
}

void main_menu(){
	cout<<endl<<endl;
	//welcoming user
	cout<<"Welcome to LAB10 Part 1"<<endl;
	//Asking user to enter which menu
	cout<<"Select Menu :"<<endl;
	cout<<"1. Maximum & Minimum Number between 2 Integer/Double"<<endl;
	cout<<"2. Maximum & Minimum Number Between 3 Integer/Double"<<endl;
	cout<<"Type 1 or 2 = ";
	cin>>choice;
	if ( choice == 1){
		menu_2integer();
		//goto line 39
	}
	else if ( choice == 2){
		menu_3integer();
		//goto line 75
	}}

int main(){
	main_menu();
}
