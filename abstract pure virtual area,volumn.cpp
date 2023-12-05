#include<iostream>
using namespace std;

class shape {
protected:
    float a;  // Use float for the side
public:
    virtual void display() = 0;
    virtual float display_area() = 0;
};

class square : public shape {
public:
    void display() override {
        cout << "Enter the value of side for square: " << endl;
        cin >> a;
    }

    float display_area() override {
        cout << "Area of square is: " << (a * a) << endl;
        return 0;
    }
};

class cube : public shape {
public:
    void display() override {
        cout << "Enter the value of side for cube: " << endl;
        cin >> a;
    }

    float display_area() override {
        cout << "Volume of cube is: " << (a * a * a) << endl;
        return 0;
    }
};

int main() {
    shape* ptr;
    square s;
    ptr = &s;
    ptr->display();
    ptr->display_area();

    cube c;
    ptr = &c;
    ptr->display();
    ptr->display_area();

    return 0;
}
