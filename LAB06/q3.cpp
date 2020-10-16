#include <iostream>
using namespace std;

int main()
{
	//program to make increasing Star Pattern
	
	//Deciding Variable
	int row; //row = the number of row that user want to know
	int i,j; //variable for looping

	//Asking user to Input the number of row
	cout<<"Input Number of Row ";
	cin>>row;
	
	//Making Looping Formula for increasing star Pattern
	for(i=1;i<=row;i++){
		for(j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;

}
}