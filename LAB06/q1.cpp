#include <iostream>
using namespace std;

//Creating Program display number from 1 - 100 ( multipe 3 ) but didnt show multiple 3 & 5

int main()
{
	//making variable
	int i;
	
	//making looping for i start from 0 that increasing by 3
	for(i=0;i<=100;i+=3){
		//making condition that not showing i%5 ( the number of multiple 3 & 5 )
		if(i %5 == 0){
			continue;
			i+=3;
		}
		cout<<i<<endl;
		}
}
		

