#include <iostream>
using namespace std;

int main()
{
	int jam1, jam2, jam1_12h, jam2_12h;
	
	jam1 = 14;
	jam2 = 21;
	
	jam1_12h = jam1%12;
	jam2_12h = jam2%12;
	
	cout<<"Jam "<<jam1<<" Dalam Sistem 12 jam adalah = "<<jam1_12h<<endl;
	cout<<"Jam "<<jam2<<" Dalam Sistem 12 jam adalah = "<<jam2_12h<<endl;
	
	return 0;

}