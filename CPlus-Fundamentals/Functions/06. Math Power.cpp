#include <iostream>
#include <valarray>

using namespace std;

void numbers (int a, int b) {
    int total = pow(a, b);

    cout << total;
}

int main() {
    int a;
    int b;
    cin >> a >> b;

    numbers(a, b);
}
