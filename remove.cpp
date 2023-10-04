#include <iostream>
#include <string>

using namespace std;

string removeChars(string str1, string str2) {
    string result = "";

    for (char c : str1) {
        if (str2.find(c) == string::npos) {
            result += c;
        }
    }

    return result;
}

int main() {
    string str1, str2;

    cout << "Enter the first string: ";
    cin >> str1;

    cout << "Enter the second string: ";
    cin >> str2;

    string result = removeChars(str1, str2);

    cout << "String after removing characters: " << result << endl;

    return 0;
}
