#include <iostream>
using namespace std;

void greeting(string nama){
	cout<<endl;
	cout<<"Your Name is "<<nama<<" ? "<<endl;
	cout<<"Welcome "<<nama<<" Nice To meet You :D ";
}


int main(){
	string a;
	cout<<"Hello, ..... , Whats Your Name ? ";
	cin>>a;
	greeting(a);
}