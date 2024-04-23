#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    ostringstream result;
    string str;

    while (cin >> str) {
        int count = str.length();
        cout << count << " ";
    }
    return 0;
}

