#include <iostream>
using namespace std;
class stu{
int sub[6];
char name[20];
public:
void getdata(){
  cout<<"enter the student name:"<<endl;
  cin>>name;
  for(int i=0;i<6;i++){
    cout<<"enter the student marks:"<<i<<endl;
    cin>>sub[i];
  }
}
void resultdata()
{
  int total=0;
  float avg;
  for(int i=0;i<6;i++)
   total+=sub[i];
    avg=total/6.0;
    cout<<"total="<<total<<endl;
    cout<<"avg="<<avg<<endl;
      if(avg<35){
        cout<<"fail"<<endl;
      }
      else{
        cout<<"pass"<<endl;
      }
 }
};
    int main(){
      stu s;
      s.getdata();
      s.resultdata();
      return 0;
    }
