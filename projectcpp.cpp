
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include<sstream>
using namespace std;

struct Info{
  int ID, age, salary;
  string name, role;
}

ifstream input ("data.txt");
ofstream output ("data.txt");

void GetData(staff){
  string str, line;
  int i=0;
  while (getline(input,line)){
    istringstream temp(line);
    temp>>staff.ID>>staff.name>>staff.age>>staff.role>>staff.salary;

  
int Main(){
  int num_of_staff=0, num_of_datatypes=5;
  cou>>num_of_staff>>num_of_datatypes;
      
  Info * staff = new Info [num_of_staff];
  GetData(staff)
  
  return 0;
}
