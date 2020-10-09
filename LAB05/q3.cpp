#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	//deciding variable and making random number to guess
	int number,count= 1,user;
	char continueloop;
	
	srand(time(NULL));
	number = rand()%100;
	
	
	//welcoming user and inviting to join quiz
	cout<<"Welcome to Simple Guessing"<<endl;
	cout<<"You will Pass this Quiz if you can answer with same number with comps num "<<endl;
	cout<<"3"<<endl;
	cout<<"2"<<endl;
	cout<<"1"<<endl;
	cout<<"Lets Goooo"<<endl;
	continueloop = 'Y';
	
	//looping condition 
	while ( continueloop == 'Y' || continueloop == 'y')
	{
		cout<<"Guest My Number ( 1 - 100)"<<endl;
		cin>>user;
		
		if (user == number){
			cout<<"Congratulation you're Correct"<<endl;
			cout<<"You have Try To Answer : "<<count<<" time/s"<<endl;
			return 0;
		}
		else if( user < number ){
			cout<<"Your Number is smaller than me "<<endl;
			cout<<"You have Try To Answer : "<<count<<" time/s"<<endl;
		}
		else if ( user > number ){
			cout<<"Your Number is Greater than me"<<endl;
			cout<<"You have Try To Answer : "<<count<<" time/s"<<endl;
		}
		count++;
		
		cout<<"Wanna Try again ? ( Y/N ) ";
		cin>>continueloop;
		if(continueloop == 'N' || continueloop == 'n'){
			cout<<"You already do the best, see you again"<<endl;
		}
	}
}
