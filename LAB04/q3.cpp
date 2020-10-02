#include <iostream>
using namespace std;

int main()
{
	//deciding variable
	int score1,score2,score3,average;
	
	cout<<"========================"<<endl;
	cout<<"Program to Grading Score"<<endl;
	cout<<"========================"<<endl;
	
	//asking user to input score1, score2 and score3 that will be stored in same name variable
	cout<<"Input 1st Score : ";
	cin>>score1;
	cout<<"Input 2nd Score : ";
	cin>>score2;
	cout<<"Input 3rd Score : ";
	cin>>score3;
	
	//calculating the average of 3 score;
	average = ( score1 + score2 + score3)/3;


	//making a condition wether the user get grade A, AB, C, D or E	
	if(average >= 80){
		cout<<"Your Average total score is : "<<score1 + score2 + score3<<" with average : "<<average<< " And Grade is A ";
		}
	else if(average >= 75 && average<80){
		cout<<"Your Average total score is : "<<score1 + score2 + score3<<" with average : "<<average<< " And Grade AB";
		}
	else if(average >= 70 && average<75){
		cout<<"Your Average total score is : "<<score1 + score2 + score3<<" with average : "<<average<< " And Grade B";
		}	
	else if(average >= 65 && average<70){
		cout<<" Your Average total score is : "<<score1 + score2 + score3<<" with average : "<<average<< " And Grade BC";
		}
	else if(average >= 60 && average<65){
		cout<<" Your Average total score is : "<<score1 + score2 + score3<<" with average : "<<average<< " And Grade C";
		}
	else if(average >= 40 && average<60){
		cout<<"Your Average total score is : "<<score1 + score2 + score3<<" with average : "<<average<< " And Grade D";
		}
	else
	cout<<"Your Average total score is : "<<score1 + score2 + score3<<" with average : "<<average<< " And Grade E";
	
	return 0;
}
