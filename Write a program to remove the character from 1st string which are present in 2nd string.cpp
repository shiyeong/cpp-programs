#include <iostream>
using namespace std;
class strings{
string s1,s2,s3="";
bool seen;
public:
void get_data(){
  cout<<"enter the first string:"<<endl;
  cin>>s1;
  cout<<"enter the second string:"<<endl;
  cin>>s2;
}
void calculation_data(){
  for(int i=0;i<s1.length();i++)
    {
      seen=false;
      for(int j=0;j<s2.length();j++)
        {
          if(s1[i]==s2[j])
          {
            seen=true;
            break;
          }
        }
      if(seen==false)
        s3+=s1[i];
    }
}
void show_data(){
  cout<<"string 1 after removing characters:"<<s3;
}

};
int main() {
  strings s;
  s.get_data();
  s.calculation_data();
  s.show_data();
  return 0;
}
