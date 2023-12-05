#include <iostream>
using namespace std;
int main()
{
int x;
cout << "Enter value: " << endl;
cin >> x;
try
{
if (x == 0)
throw(x);
if (x == 100)
throw('e');
if (x == 1000)
throw(5.5f);
}
catch (int)
{
cout << "Value of x is zero ";
}
catch (char)
{
cout << "Value of x is a char. ";
}
catch (float)
{
cout << "Vale of x is a float ";
}
return 0;
}

