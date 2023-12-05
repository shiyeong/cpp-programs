#include <iostream>
using namespace std;
class Point
{
private:
    int X, Y;
public:
    Point()
    {
        X = 0;
        Y = 0;
    }
    void setPoint(int a, int b)
    {
        X = a;
        Y = b;
    }
    int getX()
    {
        return X;
    }
    int getY()
    {
        return Y;
    }
};
int main()
{
    Point p1, p2;

    p1.setPoint(5, 10);
    p2.setPoint(50, 100);

    cout << "P1: (" << p1.getX() << ", " << p1.getY() << " )" << endl;
    cout << "P2: (" << p2.getX() << ", " << p2.getY() << " )" << endl;

    return 0;
}
