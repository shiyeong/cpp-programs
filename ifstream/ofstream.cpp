// write  a program to read from a file and write the contains from another file
#include <iostream>
#include<fstream>
using namespace std;
int main(){
  ifstream in("output.txt");
  string line;
  while(getline(in,line))
  {
  cout<<line<<endl;
  }
  string name;
  int id;
  cout<<"enter your name:"<<endl;
  getline(cin,name);
  cout<<"enter your id:"<<endl;
  cin>>id;
  ofstream hout ("output.txt");
  hout<<"student details:"<<endl;
  hout<<"your name is :"<<name<<endl;
  hout<<"your id is:"<<id<<endl;
   hout.close();
     return 0;
}
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outFile("student_details.txt");
    int studentId;
    string studentName;

    cout << "Enter student details:" << endl;

    while (true) {
        cout << "Student ID (enter -1 to finish): ";
        cin >> studentId;

        if (studentId == -1) {
            break;
        }

        cout << "Student Name: ";
        cin.ignore();
        getline(cin, studentName);

        outFile << "Student ID: " << studentId << "\tStudent Name: " << studentName << endl;
    }
    outFile.close();

    ifstream inFile("student_details.txt");

    cout << "\nDisplaying student details:" << endl;

    while (getline(inFile, studentName)) {
        cout << studentName << endl;
    }
    inFile.close();

    return 0;
}
