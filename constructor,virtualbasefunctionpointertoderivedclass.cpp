// constructor,virtual base function,pointer to derived class
#include <iostream>
using namespace std;
class base{
int roll_no;
string name;
public:
base(int r,string n){
  roll_no=r;
  name=n;
}
virtual void show_data(){
  cout<<"the student roll number is:"<<roll_no<<endl;
  cout<<"the student name is :"<<name<<endl;
}
};
class derived:public base{
int marks;
public:
derived(int r,string n,int m):base(r,n){
  marks=m;
}
void show_data(){
  cout<<"the marks of student is:"<<marks<<endl;
}
};
int main() {
  base*p;
  base b(101,"shivani");
  derived d(101,"shivani",95);
  p=&b;
  p->show_data();
  p=&d;
  p->show_data();
  return 0;
}
