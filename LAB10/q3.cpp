#include <iostream>
using namespace std;

//plot >>> number mod 10 > number >> looping >> result mod +=

//function of counting digit in grub of number
int sumdigit(int num){
	int nums;
	int sum = 0;
	
	//doing logic math to count digit number ( using modulus )
	while( num > 0 ){
		nums = num%10;
		sum += nums;
		num = num/10;
	}
	return sum;
}

int main(){
	char choice; // variable to choosing menu;
	cout<<endl<<endl;
	int number; // main variable
	cout<<"Welcome to Lab10 Part 3"<<endl;
	cout<<"In This Part, This Program will Sum-up all digit that you have"<<endl;
	cout<<"For Example the SumDigit From 125 is 1+2+5 which is 8"<<endl;
	cout<<"Input Any Number ";
	cin>>number;
	//output ( calling counting digit function )
	cout<<"The total digit sum-up from "<<number<<" is = "<<sumdigit(number)<<endl;
	//asking user want to try another number or exit program
	cout<<"wanna Try another number ?"<<endl;
	cin>>choice;
	if(choice == 'y' || choice == 'Y'){
		main();
		//goto line 20
	}
	else
		cout<<"thanks for using our app, See you :D"<<endl;
		return 0;
		//program stop

}