#include <iostream>
using namespace std;

void swapper(float a, float b){
	float temp;
	
	cout<<endl;
	cout<<"Before Swapping :"<<endl;
	cout<<"First Number is "<<a<<endl;
	cout<<"Second Number is "<<b<<endl<<endl;
	
	temp = a;
	a = b;
	b = temp;
	
	cout<<"After Swapping :"<<endl;
	cout<<"First Number is "<<a<<endl;
	cout<<"Second Number is "<<b<<endl<<endl;
	
}

void menu_swapper(){
	int angka1;
	int angka2;
	cout<<endl;
	cout<<"Welcome to Swapper apps"<<endl<<endl;


	cout<<"Masukkan Angka Pertama ";
	cin>>angka1;
	cout<<"Masukkan Angka Kedua ";
	cin>> angka2;

	swapper(angka1,angka2);
}

void odev(int a){
	if(a/2 == 0){
		cout<<"Your Number which is "<<a<<" is odd"<<endl<<endl;
	}
	else
		cout<<"Your Number which is "<<a<<" is even"<<endl<<endl;
}


void menu_odev(){
	int angka_odev;
	cout<<endl;
	cout<<"Welcome to Odd Even Checker"<<endl<<endl;


	cout<<"Masukkan Sembarang Angka ";
	cin>>angka_odev;

	odev(angka_odev);
}


int main_menu(){
	int pilihan;
	cout<<"Welcome to Program 2.0"<<endl;
	cout<<"There are 2 Apps in this Program"<<endl;
	cout<<"1. Program for Swapping between 2 number"<<endl;
	cout<<"2. Program for Checking Wheter the number is odd or even"<<endl<<endl;
	cout<<"Select Your Program"<<endl;
	cout<<"( Type 1 or 2 ) = ";
	cin>>pilihan;
	
	if(pilihan == 1){
		menu_swapper();
	}
	else if(pilihan == 2){
		menu_odev();
	}
}


int main(){
	char choice;
	do{
		main_menu();
		cout<<"Mau kembali ke Main Menu ?"<<endl;
		cout<<"Type ( Y / N ) : ";
		cin>>choice;
	}while(choice == 'Y' || choice == 'y' );
	cout<<"Thank You For Using our apps"<<endl;
	
	return 0;
}

