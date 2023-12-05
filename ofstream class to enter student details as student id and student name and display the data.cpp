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
