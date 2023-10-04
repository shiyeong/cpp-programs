//program of check wheather an entered year is leap year or not
# include <iostream>
using namespace std;
class leap{
private:
int year;
public:
void getdata()
{
  cout<<"enter the value of year:"<<endl;
  cin>>year;
}
void showdata()
{
  if(year%400==0)
  {
    cout<<" the year"<<year<<"is leap year"<<endl;
  }
  else if(year%100==0)
  {
    cout<<" the year"<<year<<"is not leap year"<<endl;
  }
  else if (year%4==0)
  {
    cout<<" the year"<<year<<"is leap year"<<endl;
  }
  else
  {
    cout<<" the year"<<year<<"is not leap year"<<endl;
  }
}
};
int main()
{
  leap le;
  le.getdata();
  le.showdata();
  return 0;
}
