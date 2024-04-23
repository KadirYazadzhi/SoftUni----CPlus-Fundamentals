#include <iostream>

using namespace std;

int add(const int& a, const int& b) {
    return a + b;
}

int substract(const int& a, const int& b) {
    return a - b;
}

int multiply(const int& a, const int& b) {
    return a * b;
}

int divide(const int& a, const int& b) {
    return a / b;
}

int main() {
int leftOperated;
int rightOperated;

string operation;

cin >> leftOperated >> rightOperated >> operation;

if (operation == "+") {
    cout << add(leftOperated, rightOperated) << endl;
}
else if (operation == "-") {
    cout << substract(leftOperated, rightOperated) << endl;
}
else if (operation == "*") {
    cout << multiply(leftOperated, rightOperated) << endl;
}
else if (operation == "/") {
    cout << divide(leftOperated, rightOperated) << endl;
}

return 0;
}
