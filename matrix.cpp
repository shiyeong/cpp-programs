#include <iostream>
using namespace std;
class matrix
{
private:
int m1[3][3],m2[3][3],mult[3][3];
public:
int getdata()
{
  cout<<"enter the values of m1:"<<endl;
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      cin>>m1[i][j];
    }
  }
  cout<<"enter the values of m2:"<<endl;
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      cin>>m2[i][j];
    }
  }
  return 0;
}
int showdata()
{
   cout<<"the matrix of m1:"<<endl;
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      cout<<m1[i][j]<<" ";
    }
    cout<<endl;
  }
  cout<<" the matrix of m2:"<<endl;
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      cout<<m2[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}
int multiply()
{
  cout<<" the multi matrix is:"<<endl;
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      mult[i][j]=0;
      for(int k=0;k<3;k++)
      {
        mult[i][j]+=m1[i][k]*m2[k][j];
      }
    }
  }
   for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      cout<<mult[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}
};
int main() 
{
  matrix mat;
  mat.getdata();
  mat.showdata();
  mat.multiply();
  return 0;
}
