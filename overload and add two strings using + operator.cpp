#include <iostream>
#include <string>
using namespace std;
class String {
    private:
        string data; 
    public:
        String(string value) {
            data = value;
        }
        string get_data() {
            return data;
        }
        String operator+(String other) {
            string result = data + other.data;
            return String(result);
        }
};
int main() {
    String s1("Hello");
    String s2("World");
    String s3 = s1 + s2;
    cout << s3.get_data() << endl;
    return 0;
}
