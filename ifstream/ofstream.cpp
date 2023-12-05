// write  a program to read from a file and write the contains from another file
#include <iostream>
#include<fstream>
using namespace std;
int main(){
  ifstream in("output.txt");
  string line;
  while(getline(in,line))
  {
  cout<<line<<endl;
  }
  string name;
  int id;
  cout<<"enter your name:"<<endl;
  getline(cin,name);
  cout<<"enter your id:"<<endl;
  cin>>id;
  ofstream hout ("output.txt");
  hout<<"student details:"<<endl;
  hout<<"your name is :"<<name<<endl;
  hout<<"your id is:"<<id<<endl;
   hout.close();
     return 0;
}
