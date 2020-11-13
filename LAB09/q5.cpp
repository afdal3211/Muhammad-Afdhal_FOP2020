#include <iostream>
using namespace std;

void proses_print(string a){
	int i;
	int n;
	cout<<"How Many Time you want to write ?";
	cin>>n;
	
	for(i = 0;i<n;i++){
		cout<<a<<endl;
	}
}


int main(){
	string tulisan;
	cout<<"Welcome to Multiple Print apps"<<endl;
	cout<<"Input any words ";
	cin>>tulisan;
	proses_print(tulisan);
}