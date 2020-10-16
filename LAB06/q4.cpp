#include <iostream>
using namespace std;

int main()
{
	//Deciding Variable
	int row; // for variable that user want to input
	int i,j;// for looping
	
	
	//Asking User to Input the number for max star ( in the end of loop ) than back to 1 star
	cout<<"Input Number of Row "<<endl;
	cin>>row;
	
	//loop condition
	for(i=1;i<=row;i++){
		for(j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
		
	}
		for(i=row-1;i>=0;i--){
		for(j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;

	}
}