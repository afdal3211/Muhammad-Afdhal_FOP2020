#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

int main()
{
	//Deciding variable and, randomizer of computer number and make sure the randomizer always randomize everytime user run the program
	srand(time(NULL));
	float num = rand() % 100, ans;
	
	//Asking User to input number from 1 - 100 and input it to variable ans ( user number )
	cout<<"Insert Any Number 1-100 = "<<endl;
	cin>>ans;
	
	//Making Conditional wheter user number are same / greater / lower than computer number
	if(ans>0 && ans<=100)
	{
		if (ans == num)
		{
			cout<<"Nice Our Number is Same, My Number is "<<num<<endl;
		}
		if (ans >= num)
		{
			cout<<"Your Number is Higher Than Me,My Number is "<<num<<endl;
		}
		if (ans <= num)
		{
			cout<<"Your Number is Lower Than Me,My Number is "<<num<<endl;
		}
	}
	else
	{
		//to prevent user inputing number out of 1-100 than we must make condtional if their do it than say error
		cout<<"Try to Input Another Number";
	}
	
	return 0;
	
}