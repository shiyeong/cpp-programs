//function overloading 
#include <iostream>
using namespace std;
int sum(int a){
  cout<<"enter the value of a:"<<endl;
  cin>>a;
  return(a*a);
}
int sum(int a,int b){
  cout<<"enter the value of a and b:"<<endl;
  cin>>a>>b;
  return(a*b);
}
double sum(int h, float x){
  cout<<"enter the value of h and x:"<<endl;
  cin>>h>>x;
  return((h*x)/2);
}

int main() {
  int a,b,c,h;
  float x;
  cout<<"area of square: "<<sum(a)<<endl;
  cout<<"area of rectangle: "<<sum(a,b)<<endl;
  cout<<"area of triangle: "<<sum(h,x)<<endl;
  
}
