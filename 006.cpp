#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string s = "Marwat";

    for (int i = 0; i < s.length(); i++) {
        s[i] = toupper(s[i]);
    }

    cout << s;
    return 0;
}