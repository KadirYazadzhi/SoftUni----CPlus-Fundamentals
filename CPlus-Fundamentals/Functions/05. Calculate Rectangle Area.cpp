#include <iostream>

using namespace std;

void numbers(int a, int b) {
    int sum = a * b;
    cout << sum;
}

int main() {
    int a;
    int b;
    cin >> a >> b;

    numbers(a, b);
}
