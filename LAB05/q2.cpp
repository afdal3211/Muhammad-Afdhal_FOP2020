#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	//Deciding variable
	int question = 0,
		score = 0;
	
	//Welcoming user to join the Quiz
	cout<<"Welcome to Simple Math Quiz"<<endl;
	cout<<"I will give you 10 Question and you need to answer it Correctly"<<endl;
	cout<<"You will Pass this Quiz if you can answer minimum 7 question"<<endl;
	cout<<"3"<<endl;
	cout<<"2"<<endl;
	cout<<"1"<<endl;
	cout<<"Lets Goooo"<<endl;
	
	//make looping ( while ) until number of question is 10
	while (question <=9){
		srand(time(NULL));
		int num1 = rand() %10 ;
		int num2 = rand() %10;
		int correct = num1 + num2, answer;
		cout<<num1<<" + "<<num2<<endl;
		cin>>answer;
		question++;
		
		//making condition wether the user's answer is correct or no and adding score when it is coreect
		if(answer == correct){
			cout<<"Correct"<<endl;
			cout<<endl;
			score++;
		}
		if(answer != correct){
			cout<<"Incorrect"<<endl;
			cout<<endl<<endl;
		}
		
	}	
	
		//Displaying User Score
		cout<<"Your score is "<<score<<" of 10 correct"<<endl;
		
		//making condition wheter the user is pass ( score >= 8 ) or fail
		if(score <= 7){
			cout<<"Sorry You Fail"<<endl;
		}
		else
			cout<<"Congratulation You Pass The Quiz"<<endl;
}
