#include <iostream>
#include <fstream>
using namespace std;

int fmax(int myarray[], int size){
  int max = myarray[0];
  for(int i=0;i<size;i++){
    if(myarray[i]>max){
      max = myarray[i];
    }
  }
  return max;
}

int fmin(int myarray[], int size){
  int min = myarray[0];
  for(int i=0;i<size;i++){
    if(myarray[i]<min){
      min = myarray[i];
    }
  }
  return min;
}

int faverage(int myarray[],int size, int& sum){
    for(int i=0;i<size;i++){
      sum += myarray[i];
    }

    return (double)sum/size;
}

int main(){
  int myarray[100];
  int min;
  int max;
  int sum = 0;

  ifstream file("lab11_randnum.txt");
  for(int i = 0;i<100;i++){
    file >> myarray[i];
  }

  cout<<" The Lowest Value from the array is "<<fmin(myarray,100)<<endl;
  cout<<" The Highest Value from the array is "<<fmax(myarray,100)<<endl<<endl;
  cout<<" The Average of the array is : "<<faverage(myarray,100,sum);

 

}