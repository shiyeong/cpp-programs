#include <iostream>
using namespace std;

class MyClass {
private:
    int data;

public:
    MyClass() : data(0) {}

    // Overloading << operator using friend function
    friend ostream& operator<<(ostream& os, const MyClass& obj) {
        os << "Data: " << obj.data;
        return os;
    }

    // Overloading >> operator using friend function
    friend istream& operator>>(istream& is, MyClass& obj) {
        cout << "Enter data: ";
        is >> obj.data;
        return is;
    }
};

int main() {
    MyClass obj;

    // Using overloaded >> and << operators
    cin >> obj;
    cout << "Entered data: " << obj << endl;

    return 0;
}
