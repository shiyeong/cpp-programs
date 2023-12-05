#include <iostream>
using namespace std;
class TollBooth
{
private:
    unsigned int totalCars;
    double totalMoney;

public:
    TollBooth() : totalCars(0), totalMoney(0.0) {}
    void payingCar()
    {
        totalCars++;
        totalMoney += 50.0;
    }
    void nonPayingCar()
    {
        totalCars++;
    }
    void display() const
    {
        cout<< "Total Cars: " << totalCars << endl;
        cout << "Total Money Collected: $" << totalMoney <<endl;
    }
};

int main()
{
    TollBooth tollBooth;
    int choice;

    do
    {

        cout << "\nToll Booth Menu:\n";
        cout << "1. Paying Car\n";
        cout << "2. Non-Paying Car\n";
        cout << "3. Display Totals\n";
        cout << "4. Exit\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            tollBooth.payingCar();
            cout << "Paying car processed.\n";
            break;
        case 2:
            tollBooth.nonPayingCar();
            cout << "Non-paying car processed.\n";
            break;
        case 3:
            tollBooth.display();
            break;
        case 4:
            cout << "Exiting program.\n";
            break;
        default:
            cout << "Invalid choice. Please enter a number between 1 and 4.\n";
        }
    }
    while (choice != 4);

    return 0;
}
