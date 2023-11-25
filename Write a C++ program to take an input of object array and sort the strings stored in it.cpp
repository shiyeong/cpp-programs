#include <iostream>
#include <algorithm>
using namespace std;

class StringSorter {
private:
  int size_;
 string* strings_;
public:
    StringSorter(int size) : size_(size) {
        strings_ = new string[size_];
    }

    ~StringSorter() {
        delete[] strings_;
    }

    void getInput() {
        cout << "Enter " << size_ << " strings:" << endl;
        for (int i = 0; i < size_; ++i) {
            cout << "String " << i + 1 << ": ";
            cin >> strings_[i];
        }
    }

    void sortStrings() {
        sort(strings_, strings_ + size_);
    }

    void displaySortedStrings() {
        cout << "\nSorted Strings:" << endl;
        for (int i = 0; i < size_; ++i) {
            cout << strings_[i] << endl;
        }
    }
};

int main() {
    int arraySize;

    cout << "Enter the size of the string array: ";
    cin >> arraySize;

    StringSorter sorter(arraySize);
    sorter.getInput();
    sorter.sortStrings();
    sorter.displaySortedStrings();

    return 0;
}
