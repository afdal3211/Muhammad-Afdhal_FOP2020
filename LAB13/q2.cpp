#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

//function prototype for recalling
void validating(int& Uinput);

//function user input
void inputting(int& Uinput){
  cout<<"Input 4 Digit Number : ";
  cin>>Uinput;
  validating(Uinput);
}

//function validating user input should not : negative,<1000,>9999
void validating(int& Uinput){
  if(Uinput<0){
    cout<<" Warning Negative Number !";
    cout<<endl<<endl;
    inputting(Uinput);
  }
  else if(Uinput <1000){
    cout<<" Warning Below 4 Digit !";
    cout<<endl<<endl;
    inputting(Uinput);
  }
  else if(Uinput > 9999){
    cout<<" Warning above 4 Digit ! ";
    cout<<endl<<endl;
    inputting(Uinput);
  }

  
}

//function binarysearch
void binarysearch(int Uinput,int token[],int size){
  int high = size-1;
  int low = 0;
  int mid;
  while(high>=low){
    mid=(high+low)/2;
    if(Uinput>token[mid]){
      low = mid+1;
    }
    else if(Uinput<token[mid]){
      high = mid-1;
    }
    //condition if the user input == token > win
    else if(Uinput==token[mid]){
      cout<<"Congrats You Win the Loteery with Digit : "<<Uinput;
      break;
    }
    
  }
  //condition if there is no token that match to userinput
  if(Uinput!=token[mid]){
    cout<<"Sorry You're Digit doesn't win the lottery";
  }
}

//main function
int main (){
  //variable recalling function
  char choice;

  //open text file 
  ifstream input ("lottery_winner.txt");
  int size = 7;
  int token[size];

  //input from text file to array ( integer )
  for(int i = 0;i<size;i++){
    input >> token[i];
  }
  
  //sorting Token
  int temp=token[0];
  for(int i=0;i<size;i++){
    for(int j=0;j<size-1;j++){
      if(token[j]>token[j+1]){
      temp = token[j];
      token[j] = token[j+1];
      token[j+1] = temp;
    }}
  }

  //  for(int i = 0;i<size;i++){
  //   cout<<token[i]<<" ";
  // }


  //asking user to input
  int Uinput;
  cout<<"Welcome to lottery Games"<<endl;
  cout<<"There are 4 digit 7 winning token"<<endl;
  cout<<"Try Your Luck"<<endl;

  //go to function inputting
  inputting(Uinput);
  
  
  cout<<endl<<endl;
  //searching by binary between Uinput to token
  binarysearch(Uinput,token,size);
  //asking user if they want to play again
  cout<<endl<<"Wanna Try Another Luck ? ( Y / N ) : ";
  cin>>choice;
  if(choice == 'Y' || choice == 'y'){
    system("clear");
    main();
  }


  input.close(); 
}