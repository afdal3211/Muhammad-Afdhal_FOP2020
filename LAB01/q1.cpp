#include <iostream> 
using namespace std; 
int main()
{ 
  //Stating value of a & b
	int a, b;
	a = 12;
	b = 5;
	
  //Stating Question
	cout<<"Diketahui A=12 dan B=5"<<endl;
	cout<<"Buatlah Operasi aritmatika Penambahan ( + ), Pengurangan ( - ), Perkalian ( x ), pembagian ( : ), Sisa ( % )"<<endl;
		
  //Finding Addition with "variable" + "variable"
	cout<<"Penambahan "<<a+b<<endl;

  //Finding Reduction with "variable" - "variable"
	cout<<"Pengurangan "<<a-b<<endl;
	
  //Finding Multiple Value with "Variable" * "variable"
  cout<<"Perkalian "<<a*b<<endl;

  //Finding Division Value with "Variable" / "variable"
	cout<<"Pembagian "<<a/b<<endl;

  //Finding Rest or Modulus Value with "Variable" % "variable"
	cout<<"Sisa/Reminder/Modulus "<<a%b<<endl;
	
	//Returning to Int Main()
	return 0;
	
}