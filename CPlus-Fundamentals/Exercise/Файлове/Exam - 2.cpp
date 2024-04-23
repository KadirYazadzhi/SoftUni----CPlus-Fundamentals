#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i= 0; i <= 5; i++) {
        cout << n % 10;
        n = n / 10;
    }
    return 0;
}