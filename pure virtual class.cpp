//calculate area of triangle and circle by using pure virtual class
#include<iostream>
using namespace std;
class area{
protected:
int a;
float b;
float r;
public:
 virtual void display()=0;
virtual void display_area()=0;
};
class triangle:public area{
public:
void display(){
  cout<<"enter the value of a:"<<endl;
  cin>>a;
  cout<<"enter the value of b:"<<endl;
  cin>>b;
}
void show_data(){
  cout<<"the length is :"<<a<<endl;
  cout<<"the breadth is:"<<b<<endl;
}
void display_area(){
  cout<<"area of triangle is :"<<(a*b/2)<<endl;
}
};
class circle:public area{
public:
void display(){
  cout<<"enter the value of r:"<<endl;
  cin>>r;
}
void show_data(){
   cout<<"the radius is :"<<r<<endl;}
void display_area(){
    cout<<"area of circle is :"<<(3.14*r*r)<<endl;
  }
};
int main(){
  area *ptr;
  triangle t;
  ptr=&t;
  ptr->display();
  t.show_data();
  ptr->display_area();
  circle c;
  ptr=&c;
  ptr->display();
  c.show_data();
  ptr->display_area();
  return 0;
}
