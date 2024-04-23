#include <iostream>
#include <climits>

using namespace std;

void smallestNumber(int a, int b, int c) {
    int min = INT_MAX;

    if (a < min) {
        min = a;
    }
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }

    cout << min;
}

int main() {
    int a;
    int b;
    int c;

    cin >> a >> b >> c;

    smallestNumber(a, b, c);
}
