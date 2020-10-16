#include <iostream>
using namespace std;

int main()
{
	//creating Variable
	int i,is,j;
	
	//asking User to Input Number of I
	cout<<"Program Perkalian I  * I"<<endl;
	cout<<"masukkan nilai perkalian ";
	cin>>is;
	
	//making Looping increasing row till I
	for(i=1;i<=is;i++){
		//making nested looping increaseing column till i
		for(j=1;j<=is;j++){
			cout<<i*j<<"  ";
		}
	
		cout<<endl;
	}
}