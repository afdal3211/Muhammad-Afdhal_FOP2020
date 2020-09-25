#include<iostream>
using namespace std;

int main()
{
	//deciding variable which are "Character" in C, and variable lowercase and uppercase ( preventing user using capslock or no )
	char c;
	int lowercase, uppercase;
	
	//Asking User to input 1 letter and input it to variable "c"
	cout<<"Input A Letter"<<endl;
	cin>>c;
	
	//Rules 
	lowercase = ( c == 'a' || c == 'i' || c=='u' || c=='o' || c=='e');
	uppercase = ( c=='A' || c=='I' || c=='U' || c=='O' || c=='E' );
	
	//Making conditional, if c = lowercase or uppercase say vowel if no say consonant
	if ( lowercase || uppercase )
	{
		cout<<c<<" is vowel";
	}
	else
	{
		cout<<c<<" is Consonant";
	}
	
	return 0;
}