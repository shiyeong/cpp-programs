#include <iostream>
#include <math.h>
using namespace std;
double power(double m, int n = 2)
{
    return pow(m, n);
}
int main()
{
    double m;
    int n;
    cout << "Enter the value of m: " << endl;
    cin >> m;
    cout << "Enter the Value of n(default is 2): " << endl;
    cin >> n;
    double result = power(m, n);
    cout << result << endl;
    cout << m << '^' << n << '=' << result;
    return 0;
}
