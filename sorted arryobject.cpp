#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of strings: ";
    cin >> n;

    string arr[n];

    cout << "Enter the strings: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sorting the array of strings
    sort(arr, arr + n);

    cout << "Sorted strings:" << endl;
    for(int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}
