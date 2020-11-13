#include <iostream>
#include <cstdlib>
using namespace std;

//making menu
int menu(){
	
	cout<<"Welcome to Simple Calculator"<<endl;
	cout<<"Select Menu that u want"<<endl;
	cout<<"1. Addition"<<endl;
	cout<<"2. Subtraction"<<endl;
	cout<<"3. Multiplication"<<endl;
	cout<<"4. Division"<<endl<<endl;
	return  0;	
}

int result(int choice){
	int num1,num2;
	cout<<endl;
	switch(choice){
		case 1:
			cout<<"Input 1st Number ";
			cin>>num1;
			cout<<"Input 2nd Number ";
			cin>>num2;
			cout<<"the result of "<<num1<<" + "<<num2<<" is "<<num1 + num2<<endl;
			break;
			
			case 2:
			cout<<"Input 1st Number ";
			cin>>num1;
			cout<<"Input 2nd Number ";
			cin>>num2;
			cout<<"the result of "<<num1<<" - "<<num2<<" is "<<num1 - num2<<endl;
			break;
			
			case 3:
			cout<<"Input 1st Number ";
			cin>>num1;
			cout<<"Input 2nd Number ";
			cin>>num2;
			cout<<"the result of "<<num1<<" * "<<num2<<" is "<<num1 * num2<<endl;
			break;
			
			case 4:
			cout<<"Input 1st Number ";
			cin>>num1;
			cout<<"Input 2nd Number ";
			cin>>num2;
			if(num2 == 0){
				cout<<"Math Error"<<endl;
			}
			else
				cout<<"the result of "<<num1<<" / "<<num2<<" is "<<num1 / num2<<endl;
			break;
			
			default:
				cout<<"Error user choice";
	}
}

//making main code
int main(){
	//make variable to go to menu
	int pilihan;
	string backmenu;
	//doing looping if user want to back to menu
	do{
	cout<<endl<<endl;
	cout<<menu(); // go to menu ( line 6 )
	cout<<"Select Number of Menu"<<endl;
	cin>>pilihan;
	result(pilihan);
	cout<<"wanna Back to menu ? ( Y / N ) ";
	cin>>backmenu;
	}
	while( backmenu == "Y" || backmenu == "y");
	return 0;
	
	
	}
	