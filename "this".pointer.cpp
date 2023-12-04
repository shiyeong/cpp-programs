#include<iostream>
using namespace std;
class student {
string name;
public:
void show_data(string n){
  this->name=n;
  cout<<"my name is:"<<name<<endl;
}
};
class marks:public student{
protected:
int mark;
public:
void show_marks(int m){
  this->mark=m;
  cout<<"my marks is :"<<mark<<endl;
}
};
int main(){
  marks m;
  m.show_data("shivani");
  m.show_marks(90);
  return 0;
}
