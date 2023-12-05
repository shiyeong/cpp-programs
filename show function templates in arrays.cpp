#include <iostream>
using namespace std;
template <class t>
t average(t a[], int size)
{
t s = 0;
for (int i = 0; i < size; i++)
{
s = s + a[i];
}
return s / size;
}
int main()
{
int X[5] = {12, 34, 45, 67, 55};
float Y[4] = {23.4, 22.2, 43.1, 20.2};
cout << "Average of integer Array: " << average(X, 5) << endl;
cout << "Average of float Array: " << average(Y, 4) << endl;
}
