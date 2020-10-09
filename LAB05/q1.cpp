#include <iostream>
using namespace std;

int main()
{
	//Deciding Variable
	int number;
	
	//Making Looping till number of looping = 50
	while ( number <= 50){
		
		//====================================================================
		//making Conditional if the number can be divide by 3 , 5 or 3 & 5
		if  (number%3 == 0 && number%5 == 0){
			cout<<"ZIP ZAP"<<endl;
		}
		else if (number%3 == 0){
			cout<<"ZIP"<<endl;
		}
		else if(number%5 == 0){
			cout<<"ZAP"<<endl;
		}
		else
			cout<<number<<endl;
		//=====================================================================
		
		//adding counted number to prevent infinite looping
		number++;
	}
	
}