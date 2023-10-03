#include<iostream>
using namespace std;
class fac
{
int n;
long factorial=1.0;
public:
void getdata()
{
  cout<<"enter the value of n:"<<endl;
  cin>>n;
}
void showdata()
{
  if(n<0)
  {
    cout<<"factorial not exist"<<endl;
  }
  else
  {
    for(int i=1;i<=n;i++)
    {
      factorial=factorial*i;
    }
    cout<<"factorial of"<<n<<"="<<factorial;
  }

}
};
int main()
{
  fac f;
  f.getdata();
  f.showdata();
  return 0;
}
