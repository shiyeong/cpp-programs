#include <iostream>
using namespace std;
int main()
{
  int unit,user;
  float charge;
  string name;
  cout<<"the number of user:"<<endl;
  cin>>user;
  for(int i=0;i<user;i++){
  cout<<"the name of user:"<<i<<endl;
    cin>>name;
  cout<<"enter the number of unit:"<<endl;
  cin>>unit;
  if(unit<=100)
  {
    charge=unit*0.6;
    cout<<charge<<endl;
  }
  else if(unit<=300)
  {
    charge=unit*0.6+(unit-100)*0.8;
    cout<<charge<<endl;
  }
  else
  {
    charge=unit*0.6+(unit-100)*0.8+(unit-300)*0.9;
    cout<<charge<<endl;
  }
  
  float finalcharge;
   cout<<"final charge"<<charge<<endl;
   if(charge>300)
   {
     finalcharge=charge+0.15;
     cout<<finalcharge;
   }
  else if (finalcharge<50.00) 
  {
    finalcharge=50.00;
    cout<<"final charge min:"<<finalcharge;
  }
    cout<<endl;
  }
   return 0;
}
