#include <iostream>
using namespace std;
class student {
int id;
string name;
public:
student(int a,string b){
  cout<<"constructor is called"<<endl;
  id=a;
  name=b;
}
virtual ~student(){
  cout<<"destructor is called of base class"<<endl;
}
void show_data(){
  cout<<"id is "<<id<<endl;
  cout<<"name is"<<name<<endl;
}
};
class marks:public student{
float mark;
public:
marks(int a,string b,float c):student(a,b){
  mark=c;
}
~marks(){
  cout<<"destructor is called of derived"<<endl;
}
void show_mark(){
  cout<<"marks of all subject is :"<<mark<<endl;
}
};
int main(){
  student *s;
  marks *m = new marks(101,"shivani",98.0);
  s=m;
  s->show_data();
  m->show_mark();
  delete s;
}
