#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	//stating Variable
	string x, x1, xres; //for string variable
	xres = x + x1; //accumulating / adding string 1 and string 2
	
	cout<<"==============================================================="<<endl;
	cout<<"                    Exercise 3 Part 1                          "<<endl;
	cout<<"           Counting Character number from string               "<<endl;
	cout<<"==============================================================="<<endl<<endl;
	//counting the number of character using variable.size() or variable.length
	x = "Hello World!";
	cout<<"The Number of Character in | "<<x<<" | "<<setw(15)<<"is : "<<x.size()<<endl<<endl;
	
	x = "Prasetiya Mulya";
	cout<<"The Number of Character in | "<<x<<" | "<<setw(12)<<"is : "<<x.size()<<endl<<endl;
	
	x = "SE2020 is the best!";
	cout<<"The Number of Character in | "<<x<<" | "<<setw(8)<<"is : "<<x.size()<<endl;
	
	cout<<"==============================================================="<<endl<<endl<<endl<<endl;
	
	cout<<"==============================================================="<<endl;
	cout<<"                    Exercise 3 Part 2                          "<<endl;
	cout<<"             Adding 1st string with 2nd string                 "<<endl;
	cout<<"==============================================================="<<endl<<endl;
	
	//adding " My name is " and " John Trump "
	x = "My Name is";
	x1 = " John Trump";
	
	cout<<x + x1<<endl;
	
	//adding " Have a " and " Good time "
	x = "Have a ";
	x1 = "good day!";
	
	cout<<x + x1<<endl<<endl;
	
	cout<<"==============================================================="<<endl<<endl;

}