#include <iostream>
using namespace std;

int main ()
{
	//deciding variable
	int  year, month;
	
	cout<<"===================================="<<endl;
	cout<<"Program To Check Last Day in A Month"<<endl;
	cout<<"===================================="<<endl;
	
	
	//Asking user to input month and year that will be saved in thats variable
	cout<<"Input Your Month ( in number ) :";
	cin>>month;
	
	cout<<"Input Your Year : ";
	cin>>year;
	
	
	//making condition ( case ) wether the month is in january or february or so on
	switch(month)
	{
	case 1 :
		cout<<"in month "<<month<<" of "<<year<<"there are 31 day";
	break;
	
	//because of in february has 2 conditional ( normal anad leap years ) so we make a condtion
	case 2 :
		if((year %4 == 0 && year % 100 != 0) || (year % 400 == 0))
		{
		cout<<"in "<<month<<" of "<<year<<" there are 29 day";
		}
		else
		cout<<"in month "<<month<<" of "<<year<<" there are 28 day";
	break;
	case 3 :
		cout<<"in month "<<month<<" of "<<year<<" there are 31 day";
	break;
	case 4 :
		cout<<"in month "<<month<<" of "<<year<<" there are 30 day";
	break;
	case 5 :
		cout<<"in month "<<month<<" of "<<year<<" there are 31 day";
	break;
	case 6 :
		cout<<"in month "<<month<<" of "<<year<<" there are 30 day";
	break;
	case 7 :
		cout<<"in month "<<month<<" of "<<year<<" there are 31 day";
	break;
	case 8 :
		cout<<"in month "<<month<<" of "<<year<<" there are 30 day";
	break;
	case 9 :
		cout<<"in month "<<month<<" of "<<year<<" there are 31 day";
	break;
	case 10 :
		cout<<"in month "<<month<<" of "<<year<<" there are 30 day";
	break;
	case 11 :
		cout<<"in month "<<month<<" of "<<year<<" there are 31 day";
	break;
	case 12 :
		cout<<"in month "<<month<<" of "<<year<<" there are 30 day";
	break;
	
	default :
	cout<<"error"; 
	}
	return 0;
}