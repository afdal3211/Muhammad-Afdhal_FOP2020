#include <iostream> //note this program can only run in terminal  compiler
#include <cstdlib> //if you using visual code/dev c++ or another
using namespace std; //pls change "system("clear")" to "system("cls")"


//===================================================
//Function Prototype for returning to menu(x);
void mains();
void menu1s(int *myList,int size,int value);
void menu2s(int total, double average);
void menu3s(int *myList,int size, int value);
//===================================================


//===================================================
//Function Searching Value

//Displaying all array in the first time
void Display(int *myList,int size){
	for(int i = 0;i<size;i++){
		cout<<myList[i]<<" ";
	}
}

//Function of Menu 1, Displaying value of array
void Display1(int *myList,int size, int value){
	size = value;
	cout<<"Array "<<value<<" Has Value "<<myList[size-1];
}

//function of Menu 2, Counting the Sum of Array
void sum(int *myList,int size, int& total){
	for(int i=0;i<size;i++){
		total += myList[i];
	}
	
}

//function of Menu 2, Counting the Average of Array
void FindAvg(int *myList,int size, int total,double& average){
	average = total/size;
}

//function of Menu 3, Checking wheter value of array is odd or even > returning odd or even 
string FindOddEven(int *myList, int size,int value){
	size = value;
	if(myList[size-1]%2 == 0){
		return "Even";
	}
	else
		return "Odd";
}


//===================================================



//===================================================
//Function Menu

//function Menu1
void menu1(int *myList,int size,int value){
	char choice;
	cout<<"Welcome to 1st Menu"<<endl;
	cout<<"Which Array you want to know ? : ";
	cin>>value;
	
	Display1(myList, size, value);
	cout<<endl<<endl;	
	cout<<"Wanna Back ?";
	cout<<"Select : "<<endl;
	cout<<"M = Main Menu"<<endl;
	cout<<"B = Back To Menu 1 / Re-Try "<<endl;
	cout<<"N = Exit The Program"<<endl;
	cout<<"Type ( M / B / N ) : ";
	cin>>choice;
	system("clear");
	if(choice == 'm' || choice == 'M'){
		mains(); //go to line 204
	}
	if(choice == 'b' || choice == 'B'){
		menu1s(myList, size, value); //go to line 207
	}
	else
		cout<<"You Select N or other key that cause exiting Program"<<endl<<"Thank You For Using Our Program";
}

//function Menu2
void menu2(int total, double average){
	char choice;
	cout<<"Welcome to 2nd Menu"<<endl;
	cout<<"Which Display : "<<endl;
	cout<<"     a. The Sum of Array"<<endl;
	cout<<"     b. The Average of Array"<<endl<<endl;
	cout<<"Select Menu"<<endl;
	cout<<"Type ( a / b ) : ";
	cin>>choice;
	system("clear");
	if(choice == 'a' || choice == 'A'){
		cout<<"The Total of Array is "<<total; //checking total, go to line 31
	}
	else if(choice == 'b' || choice == 'B'){
		cout<<"The Average of Array is "<<average; //checking average, go to line 39
	}
	else
		cout<<"You Typle Wrong menu that cause exiting program"<<endl<<"Please ReLaunch The Program";
	
	cout<<endl<<endl;	
	cout<<"Wanna Back ?";
	cout<<"Select : "<<endl;
	cout<<"M = Main Menu"<<endl;
	cout<<"B = Back To Menu 2"<<endl;
	cout<<"N = Exit The Program"<<endl;
	cout<<"Type ( M / B / N ) : ";
	cin>>choice;
	system("clear");
	if(choice == 'm' || choice == 'M'){
		mains(); //goto line 204
	}
	if(choice == 'b' || choice == 'B'){
		menu2s(total, average); //goto line 210
	}
	else
		cout<<"You Select N or other key that cause exiting Program"<<endl<<"Thank You For Using Our Program";
}

//function menu3
void menu3(int *myList, int size,int value){
	char choice;
	cout<<"Which Array You want to Know The Value ? : ";
	cin>>value;
	
	
	cout<<"The Array "<<value<<" Has Value "<<myList[value-1]<<" which is "<<FindOddEven(myList,size,value); //finding value, goto line 44
	
	cout<<endl<<endl;	
	cout<<"Wanna Back ?";
	cout<<"Select : "<<endl;
	cout<<"M = Main Menu"<<endl;
	cout<<"B = Back To Menu 3 / re try"<<endl;
	cout<<"N = Exit The Program"<<endl;
	cout<<"Type ( M / B / N ) : ";
	cin>>choice;
	system("clear");
	if(choice == 'm' || choice == 'M'){
		mains(); //go to line 204
	}
	if(choice == 'b' || choice == 'B'){
		menu3s(myList, size, value ); // goto line 213
	}
	else
		cout<<"You Select N or other key that cause exiting Program"<<endl<<"Thank You For Using Our Program";
}

//===================================================



//===================================================
//main function
int main(){
	//declaring variable
	int total = 0; 
	int value = 0;
	double average = 0;
	int size = 5;
	int myList[5] = { 4, 7, 12, 5, 2};
	int choice;
	
	sum(myList, size,total);
	FindAvg(myList, size,total,average);
	FindOddEven(myList,size,value);
	
	cout<<"Welcome to LAB11"<<endl;
	cout<<"There are array { ";
	Display(myList, size); cout<<" } "<<endl;
	cout<<"From Array Above"<<endl;
	cout<<"There are 2 Menu Here"<<endl;
	cout<<"1. Displays Element : "<<endl<<endl;
	
	cout<<"2. Displays : "<<endl;
	cout<<"     a. The Sum of Array"<<endl;
	cout<<"     b. The Average of Array"<<endl<<endl;
	
	cout<<"3. Displays Wheter the Array is Odd or Even"<<endl<<endl;
	cout<<"Select Menu"<<endl;
	cout<<"Type ( 1 / 2 / 3) : ";
	cin>>choice;
	system("clear");
	if(choice == 1){
		menu1(myList,size,value); //goto line 63
		
	}
	else if(choice == 2){
		menu2(total,average); //goto line 90
	}
	else if(choice == 3){
		menu3(myList,size,value); //goto line 129
	} else cout<<"You Select N or other key that cause exiting Program"<<endl<<"Thank You For Using Our Program"; return 0;
	
	
}	

void mains(){
	main();
}
void menu1s(int *myList, int size, int value){
	menu1(myList, size, value); //goto line 63
}
void menu2s(int total, double average){
	menu2(total, average); //goto line 90
}
void menu3s(int *myList,int size, int value){
	menu3(myList, size, value); //goto line 129
}