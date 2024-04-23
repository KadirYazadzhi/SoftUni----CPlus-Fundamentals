#include <iostream>

using namespace std;

int main() {
    int n;
    int number;
    int min = INT_MAX;
    int max = INT_MIN;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> number;

        if (number > max) {
            max = number;
        }

        if (number < min) {
            min = number;
        }
    }

    cout << min << " " << max << endl;

}