#include <iostream>
#include <string>

using namespace std;

const int& getMax(const int& a, const int& b) {
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
}

const char& getMax(const char& a, const char& b) {
    if ( a > b) {
        return a;
    }
    else {
        return b;
    }
}

const string& getMax(const string& a, const string& b) {
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
}

int main() {
    string type;
    cin >> type;

    if (type == "int") {
        int a;
        int b;
        cin >> a >> b;

        const int& max = getMax(a, b);
        cout << max << endl;
    }

    else if (type == "char") {
        char a;
        char b;
        cin >> a >> b;

        const char& max = getMax(a,b);
        cout << max << endl;
    }

    else if (type == "string") {
        string a;
        string b;
        cin.ignore();

        getline(cin, a);
        getline(cin, b);

        const string& max = getMax(a, b);
        cout << max << endl;
    }
}
