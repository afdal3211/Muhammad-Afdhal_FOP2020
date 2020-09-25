#include<iostream>
using namespace std;

int main()
{
	//Deciding Variable which are angka1 and angka2 
	float angka1, angka2;
	
	
	cout<<"Simple Calculator ( +, -, /, *)"<<endl;
	
	//Asking User to Input first number and second number
	cout<<"Input the First Number "<<endl;
	cin>>angka1;
	
	cout<<"Input the Second Number "<<endl;
	cin>>angka2;
	
	
	//adding more variable which are c ( in Character Type )
	char c;
	//Asking User to decide wheter they want to add,subtract,divide or multiple their number
	cout<<"1. Addtional (+) 2. Subtraction (-)  3. Division (:)  4. Multiple (x) ";
	cin>>c;
	
	//Making Case ( case1 = addition, case2 = subtraction and so on same like before instruction
	switch(c)
	{
		case'1' : cout<<"hasil penambahan dari "<<angka1<<" + "<<angka2<<" adalah "<<angka1+angka2<<endl;
		break;
		
		case'2' : cout<<"hasil pengurangan dari "<<angka1<<" - "<<angka2<<" adalah "<<angka1-angka2<<endl;
		break;
		
		case'3' : 
		if (angka2  == 0 )
		{
			//Because of if second number = 0 in division is error ( unidentified )
			cout<<"Tidak boleh = 0";
		}
		else
		{
			cout<<"hasil pembagian dari "<<angka1<<" : "<<angka2<<" adalah "<<angka1/angka2<<endl;
		}
		break;
		
		case'4' : cout<<"hasil perkalian dari "<<angka1<<" x "<<angka2<<" adalah "<<angka1*angka2<<endl;
		break;
		
		//Adding "other Case" if user didnt input their number according to instruction than say its error or input new number
		default: cout<<"input salah";
	}
	
	return 0;
	
	}
