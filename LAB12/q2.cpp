#include<iostream>
#include<fstream>
#include<cstdlib>

using namespace std;

int main(){
  ifstream input;
  input.open("lab11_employee.txt");

  if(input.fail()){
    cout<<"ERROR: File could not open."<<endl;
    exit(1);
  }

  const int array_size = 8;

  string emp_name[array_size];
  double emp_salary[array_size];

  int i = 0; 
  string line;
  
  while(getline(input, line)) {
    int nameEndPos = line.find('$') - 1;
    emp_name[i] = line.substr(0, nameEndPos);
    int salaryStartPos = line.find('$') + 1;
    int salaryEndPos = line.find('\n');
    emp_salary[i] = stod(line.substr(salaryStartPos, salaryEndPos));
    ++i;
  }

  for(int i = 0; i < array_size; i++){
    cout << emp_name[i] << " - " << emp_salary[i] << endl;
  }

  double lowestsalary = emp_salary[0];
  int indexname;
  for(int i=0;i<array_size;i++){
    if(emp_salary[i]<lowestsalary){
      lowestsalary = emp_salary[i];
      indexname = i;
    }
  }
  cout<<endl<<endl;
  cout<<"The Lowest salary is "<<emp_name[indexname]<<" with salary : "<<lowestsalary;

  cout<<endl;

  double highestsalary = emp_salary[0];
  for(int i=0;i<array_size;i++){
    if(emp_salary[i]>highestsalary){
      highestsalary = emp_salary[i];
      indexname=i;
    }
  }
  cout<<endl<<endl;
  cout<<"The Highest salary is "<<emp_name[indexname]<<" with salary : "<<highestsalary<<endl;

  double sum = 0;
  for(int i=0;i<array_size;i++){
    sum += emp_salary[i];
  }

  double average = sum/array_size;
  cout<<"The Average salary is : "<<average<<endl<<endl;

  cout<<"The Person Who has Salary about average is : "<<endl;
  for(int i=0;i<array_size;i++){
    if(emp_salary[i]>average){
      cout<<emp_name[i]<<" with the salary : "<<emp_salary[i]<<endl;
    }
  }

  cout<<endl<<endl;
  
  cout<<"The Person Who has Salary below average is : "<<endl;
  for(int i=0;i<array_size;i++){
    if(emp_salary[i]<average){
      cout<<emp_name[i]<<" with the salary : "<<emp_salary[i]<<endl;
    }
  }

  





  input.close();
}