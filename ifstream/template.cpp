//template 1st type
#include<iostream>
using namespace std;
template<class t>
t sum(t a,t b)//a and b dependent on t
{
  cout<<"the sum of two number :"<<endl;
  cout<<"the value of a is "<<a<<endl;
  cout<<"the value of b is "<<b<<endl;
  cout<<"a+b="<<a+b<<endl;
  return 0;
}
int main(){
  sum(2,3);
  sum(2.3,4.5);
}
// SECOND TYPE
#include<iostream>
using namespace std;
template<class t1,class t2>
float sum(t1 x,t2 y)//x becomes of type t1 and y becomes of type t2
{
  cout<<"the sum of two number :"<<endl;
  cout<<"the value of x is "<<x<<endl;
  cout<<"the value of y is "<<y<<endl;
  cout<<"a+b="<<x+y<<endl;
  return 0;
}
int main(){
  sum(2,3.5);
  sum(2.3,4);
}*/
