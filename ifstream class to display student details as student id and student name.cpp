#include <iostream>
#include <fstream>

using namespace std;

int main()
{
ifstream inFile("new.txt");

cout << "Employee Details:" << endl;

string studentDetails;

while (getline(inFile, studentDetails))
{
cout << studentDetails << endl;
}

inFile.close();

return 0;
}
