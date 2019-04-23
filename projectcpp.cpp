
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include<sstream>
using namespace std;

ifstream input ("data.txt");
ofstream output ("data.txt");

void GetData(ID,age,salary,name,role){
  string str, line;
  int i=0;
  while (getline(input,line)){
    istringstream temp(line);
    temp>>ID[i]>>name[i]>>age[i]>>role[i]>>salary[i];
    i+=1;
  }

  
int Main(){
  int num_of_staff=32767, num_of_datatypes=5;    
  int * ID = new int [num_of_staff];
  int * age = new int [num_of_staff];
  double * salary = new double [num_of_staff];
  string * name = new string [num_of_staff];
  string * role = new string [num_of_staff];
  GetData(ID,age,salary,name,role);
  
  return 0;
}
