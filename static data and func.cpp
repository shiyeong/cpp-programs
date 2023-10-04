#include <iostream>
using namespace std;
class employee
{
int id;
static int count;
public:
void getdata()
{
  cout<<"enter the id:"<<endl;
  cin>>id;
  count++;
}
void showdata()
{
  cout<<"the id of employee is :"<<id<<"and the number is:"<<count<<endl;
}
static void getcount()
{
  cout<<"the value of count is:"<<count<<endl;
}
};
int employee::count;
int main()
{
  employee rohan,shiv,jiya;
  rohan.getdata();
  rohan.showdata();
  employee::getcount();
  shiv.getdata();
  shiv.showdata();
  employee::getcount();
  jiya.getdata();
  jiya.showdata();
  employee::getcount();
  return 0;
}
