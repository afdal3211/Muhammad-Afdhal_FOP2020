#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	//deciding variable + current money
	int balance = 500, pilihan, n_deposit,n_withdraw ;
	char status;
	
	//adding menu
	menu :
	cout<<endl;
	cout<<"Selamat Datang di ATM sederhana"<<endl;
	cout<<"Welcome to menu"<<endl;
	cout<<"1. Check Saldo"<<endl;
	cout<<"2. Lakukan Deposit"<<endl;
	cout<<"3. Lakukan Withdraw"<<endl;
	cout<<"4. Keluar"<<endl;
	cout<<"====== Pilih Menu ======"<<endl;
	cin>>pilihan;
	system("cls");
	
	//switch case wheter the user wanna chechk the balance, deposit, or withdraw balance
	switch ( pilihan ){
		case 1 :
			do{
			cout<<"Saldo anda Sebesar = "<<balance<<endl;
			cout<<" lagIngin Check saldi ? ( Y = Check saldo / N = kembali ke menu ) : ";
			cin>>status;} while ( status == 'Y' || status == 'y');
			system("cls");
			goto menu;
		
		
		case 2 :
			do{
					
				cout<<"Saldo Anda Sekarang berjumlah "<<balance<<endl;
				cout<<"Masukkan nilai yang ingin di deposit : ";
				cin>>n_deposit;
				
				balance = balance + n_deposit;
				
				cout<<"Saldo Anda sekarang berjumlah : "<<balance<<endl;
				cout<<"Ingin Melakukan Deposit lagi ?"<<endl; 
				cout<<"( Y = Melakukan deposit lagi / N = kembali ke menu ) : ";
				cin>>status;
				system("cls" ); } while ( status == 'Y' || status == 'y');
				system("cls");
				goto menu;
		
		case 3 :
			do{
				cout<<"Saldo Anda sekarang berjumlah : "<<balance<<endl;
				cout<<"Masukkan Nilai yang ingin di tarik : ";
				cin>>n_withdraw;
				
				//making condtion if the amount of withdraw >= balance ( rejecting )
				if ( n_withdraw <= balance){
				balance = balance - n_withdraw;
				}
				else
					cout<<"Jumlah Yang ingin ditarik lebih dari saldo"<<endl;
				
				
				cout<<"Saldo Anda sekarang berjumlah : "<<balance<<endl;
				cout<<"Ingin Melakukan Penarikan lagi ? "<<endl;
				cout<<"( Y = Melakukan withdraw lagi / N = kembali ke menu ) : ";
				cin>>status; system; } while ( status == 'Y' || status == 'y');
				system("cls");
				goto menu;
	
				
		case 4 :
			cout<<"Terima Kasih Telah Datang"<<endl;
			system("cls");
			return 0;
		
	}
}
  