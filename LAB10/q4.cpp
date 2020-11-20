#include <iostream>
using namespace std;
char choice; //variable menu choosing

void calculator(int number);

int main(){
	cout<<endl<<endl;
	int input; //main variable to count number of year, month and day.
	cout<<"Welcome to Lab10 Part 4"<<endl;
	cout<<"in this Part, the apps will count how many ... Year, ... Month, and ... day that user input ( in Day )"<<endl;
	cout<<"Input any Number of Day = ";
	cin>>input;
	//calling calculator of date;
	calculator(input);
	//goto line 19
}

void calculator (int number){
	{
	//algorithm to count year,month and day
	cout<<"your input is equal to : "<<endl;
	int year = number/365;
	cout<<"Year = "<<year<<endl;
	int months = number%365;
	int month = months/10;
	cout<<"Month = "<<month<<endl;
	int day = month%30;
	cout<<"Day = "<<day<<endl;
	
	//asking user to try another number of day or exit program
	cout<<"Wanna Trying another number ?"<<endl;
	cout<<"( Y = Yes/Trying another number, N = No/Exit The Program"<<endl;
	cout<<" Type ( Y/N ) = ";
	cin>>choice;
	if(choice == 'y' || choice == 'Y'){
		main();
		//goto line 7
	}
	else
		cout<<"You're Typing N or another word that cause exiting program"<<endl;
		cout<<"Thank You for Using our Program";
		//program exit
	
}

}