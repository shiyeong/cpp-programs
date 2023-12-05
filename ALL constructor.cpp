#include <iostream>
using namespace std;
class myclass{
int data;
public:
//default constructor 
myclass(){
  data=0;
  cout<<"default constructor is called"<<endl;
}
//parameterized constructor
myclass(int x){
  data=x;
  cout<<"parameterized constructor is called"<<endl;
}
//copy constructor
myclass(myclass &obj){
  data=obj.data;
  cout<<"copy constructor is called"<<endl;
}
//destructor
~myclass(){
  cout<<"destructor called"<<endl;
}
void show_data(){
  cout<<"data is:"<<data<<endl;
}
};
int main(){
  myclass obj1,obj2(5),obj3(obj2);
  obj1.show_data();
  obj2.show_data();
  obj3.show_data();
  return 0;
}
