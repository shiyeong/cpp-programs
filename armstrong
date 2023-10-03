#include <iostream>
using namespace std;
class arm{
int n,num,rem,sum=0;
public:
void getdata()
{
cout<<"enter an integer:"<<endl;
  cin>>n;
}
void showdata()
{
  num=n;
  while(n>0){
    rem=n%10;
    sum=sum+(rem*rem*rem);
    n=n/10;
  }
  if(num==sum){
    cout<<"number is armstrong:"<<endl;
  }
  else{
    cout<<"number is not armstrong:"<<endl;
  }
}
};

int main() {
  arm am;
  am.getdata();
  am.showdata();
  return 0;
}
