#include<iostream>
#include<fstream>
#include<cstdlib>

using namespace std;

int main(){
  const int size = 40;
  string student_name[size];
  int grade[size];

  ifstream input ("lab11_grade.txt");
  
  int i = 0;
  string line;

  while (getline(input, line)){
    int nameEndPos = line.find ('-') - 1;
    student_name[i] = line.substr(0, nameEndPos);

    int gradestartpos = line.find ('-') + 1;
    grade[i] = stod(line.substr (gradestartpos, ('\n')));

    ++i;
  }

  cout<<"Show That Student Name with his/her score : "<<endl;
  for(int i=0;i<size;i++){
    cout<<student_name[i]<<" - "<<grade[i]<<endl;
  }
 
 cout<<endl<<endl;

  int indexname;
  int min = grade[0];
  for(i=0;i<size;i++){
    if(grade[i]<min){
      min=grade[i];
      indexname = i;
    }
  }

  cout<<"The Person who got lowest score is "<<student_name[indexname]<<" which get score : "<<min<<endl;
  
  int max = grade[0];
  for(i=0;i<size;i++){
    if(grade[i]>max){
      max=grade[i];
    }
  }

   cout<<"The Person who got Highest score is "<<student_name[indexname]<<" which get score : "<<max<<endl;

  int sum = 0;

  for(i=0;i<size;i++){
    sum += grade[i];

  }

  double average = sum/size;
  cout<<"The Average score of the class is : "<<average;
  
  cout<<endl<<endl;

  int npass = 0;
  for(i=0;i<size;i++){
    if(grade[i]>average){
      cout<<student_name[i]<<" with score : "<<grade[i]<<endl;
      npass ++;
    }
  }
  cout<<"Total : "<<npass<<" Student"<<endl;

  cout<<endl<<endl;

  int nnpass = 0;
  for(i=0;i<size;i++){
    if(grade[i]<average){
      cout<<student_name[i]<<" with score : "<<grade[i]<<endl;
      nnpass++;
    }
  }
  cout<<"Total : "<<npass<<" Student"<<endl;


  input.close();
}