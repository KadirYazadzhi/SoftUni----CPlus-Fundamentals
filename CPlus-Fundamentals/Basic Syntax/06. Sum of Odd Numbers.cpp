#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;
    int current = 1;

    for (int i = 0; i < n; i++) {
        cout << current << endl;
        sum += current;
        sum += 2;
    }

    cout << "Sum: " << sum << endl;
}
