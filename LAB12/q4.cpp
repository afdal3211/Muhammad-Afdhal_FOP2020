#include <iostream>
#include <fstream>
#include <cstdlib>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
using namespace std;



int main (){
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

  int sortNumber[size];
  for (int i = 0 ; i < size; i++){
    sortNumber[i] = grade[i];
  }

  sort (sortNumber, sortNumber + size);

  for (int i = 0 ; i < size; i++){
    for (int j = 0; j < size - j; j++){
 if (sortNumber[i] == grade[j]){
      cout << grade[j] << " " << student_name[j] << endl;
    }
    }
   
  }

  cout<<endl<<endl;

  sort(sortNumber, sortNumber + size, greater<int>());
  for (int i = 0 ; i < size; i++){
    for (int j = 0; j < size - j; j++){
 if (sortNumber[i] == grade[j]){
      cout << grade[j] << " " << student_name[j] << endl;
    }
    }
   
  }
 

  input.close(); 
}