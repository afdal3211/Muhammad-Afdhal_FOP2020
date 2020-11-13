#include <iostream>
using namespace std;

void area(float r){
	
	cout<<endl;
	cout<<"You're Inputing "<<r<<" as radius. "<<endl;
	cout<<"The area of Circle with radius "<<r<<" is "<<3.14*r*r<<endl<<endl;
	
}

void menu_area(){
	float radius;
	
	cout<<endl;
	cout<<"Welcome to Circle Area apps"<<endl<<endl;


	cout<<"Input Jari-jari ";
	cin>>radius;

	area(radius);
}

void volume(float r){
	cout<<endl;
	cout<<"You're Inputing "<<r<<" as radius. "<<endl;
	cout<<"The Volume of sphere with radius "<<r<<" is "<<3.14*r*r*r*4/3<<endl<<endl;
}


void menu_volume(){
	float radius;
	
	cout<<endl;
	cout<<"Welcome to Sphere Volume apps"<<endl<<endl;


	cout<<"Input Jari-jari ";
	cin>>radius;


	volume(radius);
}


int main_menu(){
	int pilihan;
	cout<<"Welcome to Program 4.0"<<endl;
	cout<<"There are 2 Apps in this Program"<<endl;
	cout<<"1. Finding Area of Circle"<<endl;
	cout<<"2. Finding Volue of Spehere"<<endl<<endl;
	cout<<"Select Your Program"<<endl;
	cout<<"( Type 1 or 2 ) = ";
	cin>>pilihan;
	
	if(pilihan == 1){
		menu_area();
	}
	else if(pilihan == 2){
		menu_volume();
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

