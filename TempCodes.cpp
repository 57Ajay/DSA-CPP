#include <iostream>
#include <string>
using namespace std;

string reverseString(const string &str) {
    string reversed = str;
    int n = reversed.length();
    for (int i = 0; i < n / 2; i++) {
        swap(reversed[i], reversed[n - i - 1]);
    }
    return reversed;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    string reversed = reverseString(str);
    cout << "Reversed string: " << reversed << endl;

    return 0;
}