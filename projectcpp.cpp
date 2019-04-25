#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include<sstream>
using namespace std;

ifstream input ("data.txt");
ofstream output ("data.txt");
int num_of_staff=32767, num_of_datatypes=5;  
int * ID = new int [num_of_staff];
int * age = new int [num_of_staff];
double * salary = new double [num_of_staff];
string * name = new string [num_of_staff];
string * role = new string [num_of_staff];
string * tbc = new string [num_of_staff];

void GetData(){
  string str, line;
  int i=0;
  while (getline(input,line)){
    if (i>=num_of_staff){
      AddStaff(1);
    }
    istringstream temp(line);
    temp>>ID[i]>>name[i]>>age[i]>>role[i]>>salary[i];
    i+=1;
  }
}
void AddStaff(int n){
  int total=num_of_staff+n;
  int * temp1 = new int [total];
  int * temp2 = new int [total];
  double * temp3 = new double [total];
  string * temp4 = new string [total];
  string * temp5 = new string [total];
  string * temp6 = new string [total];
  for (i=0;i<num_of_staff;i++){
    temp1[i]=ID[i];
    temp2[i]=age[i];
    temp3[i]=salary[i];
    temp4[i]=name[i];
    temp5[i]=role[i];
    temp6[i]=tbc[i];
  }
  delete [] ID;
  delete [] age;
  delete [] salary;
  delete [] name;
  delete [] role;
  delete [] tbc;
  ID=temp1;
  age=temp2;
  salary=temp3;
  name=temp4;
  role=temp5;
  tbc=temp6;
  num_of_staff+=n;
}
void DisplayManu(){
  cout<<"****************************************"<<endl;
  cout<<"** Welcome to Staff Management System **"<<endl;
  cout<<"****************************************"<<endl;
  cout<<"1. Load existing data"<<endl;
  cout<<"2. Add new employees"<<endl;
  cout<<"3. Search for an employee"<<endl;
  cout<<"4. Fire an employee"<<endl;
  cout<<"Edit the information of an employee"<<endl;
  cout<<"Filter all employees with a salary"<<endl;
  cout<<"Add attribute to employees"<<endl;
  cout<<"Sorting the database"<<endl;
}
int GetComand(){
  int y=-1;
  cout<<"Please enter your choice: ";
  cin>>y;
  return y;
}
void EnterStaff(){
  int y=0,i,j,k;
  cout<<"Please enter the number of new employee: ";
  cin>>y;
  AddStaff(y);
  for (i=(num_of_staff-y+1);i<=num_of_staff;i++){
    cout<<"Please enter the detail of new Staff "<<i<<endl;
    cout<<"ID: ";
    cin>>ID[i];
    cout<<"name: ";
    cin>>name[i];
    cout<<"age :";
    cin>>age[i];
    cout<<"role: ";
    cin>>role[i];
    cout<<"salary: ";
    cin>>salary[i];
    
    //if have more...
    
  }
}      
int SearchFor(){
  int i,j,k;
  string type1,str2;
  cout<<"Search by which attribute? ID, name, age or role. ";
  cin>>type1;
  switch(str){
    case (ID):
      cout<<"Please enter his/her ID: ";
      cin>>k;
      for (i=0;i<num_of_staff;i++){
        if (k==ID[i]){
          ShowDetail(i);
        }
      }
      break;
    case (name):
      cout<<"Please enter his/her name: ";
      cin>>str2;
      for (i=0;i<num_of_staff;i++){
        if (str2==name[i]){
          ShowDetail(i);
        }
      }
      break;
    case (age):
      cout<<"Please enter his/her age: ";
      cin>>k;
      for (i=0;i<num_of_staff;i++){
        if (k==age[i]){
          ShowDetail(i);
        }
      }
      break;
    case (role):
      cout<<"Please enter his/her role: ";
      cin>>str2;
      for (i=0;i<num_of_staff;i++){
        if (str2==role[i]){
          ShowDetail(i);
        }
      }
      break;
        
    
    
    
    
  
  
  
int Main(){
  DisplayManu();
  int x=30;
  string y;
  GetData(ID,age,salary,name,role);
  while (x != 0){
    x=GetComand();
    switch(x){
      case 2:
        EnterStaff();
        break;
      case 3:
        SearchFor();
        break;
        
        
        
  
  return 0;
}
