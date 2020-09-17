#include <iostream>
using namespace std;

int main()
{
  //Stating Variable
	int jam1, jam2, jam1_12h, jam2_12h;

  //Stating Value of Clock 1 and 2
	jam1 = 14;
	jam2 = 21;
	
  //Changing Clock time mode 24h to 12h using reminder statement
	jam1_12h = jam1%12;
	jam2_12h = jam2%12;
	
  //Output
	cout<<"Jam "<<jam1<<":00 Dalam Sistem 12 jam adalah = "<<jam1_12h<<":00"<<endl;
	cout<<"Jam "<<jam2<<":00 Dalam Sistem 12 jam adalah = "<<jam2_12h<<":00"<<endl;
	
	return 0;

}