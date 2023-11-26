#include <iostream>
using namespace std;
class staff{
protected:
string name;
public:
void get_staff(){
  cout<<"enter the name of staff:"<<endl;
  cin>>name;
}
void show_staff(){
  cout<<"the name of staff is :"<<""<<name<<endl;
}
};
class teacher:public staff{
protected:
string subject;
public:
void get_teacher(){
  cout<<"enter the subject for publication:"<<endl;
  cin>>subject;
}
void show_teacher(){
cout<<"the subject for publication is :"<<subject<<endl;
}
};
class officer:public staff{
protected:
char grade;
public:
void get_officer(){
  cout<<"enter the grade of officer:"<<endl;
  cin>>grade;
}
void show_officer(){
  cout<<"the officer grade is :"<<grade<<endl;
}
};
class typist:public staff{
protected:
float speed;
public:
void get_typist(){
  cout<<"enter the speed of typist:"<<endl;
  cin>>speed;
}
void show_typist(){
  cout<<"the speed of typist is :"<<speed<<endl;
}
};
class regular:public typist{
};
class casual:public typist{
protected:
float daily_wages;
public:
void get_casual(){
  cout<<"enter the daily wages of casual typist:"<<endl;
  cin>>daily_wages;
}
void show_casual(){
  cout<<"the daily wages of casual typist is :"<<daily_wages<<endl;
}
};
int main(){
  teacher t;
  officer o;
  regular r;
  casual c;
  t.get_staff();
  t.get_teacher();
  o.get_officer();
  c.get_casual();
  t.show_staff();
  t.show_teacher();
  o.show_officer();
  c.show_casual();
  return 0;
}
