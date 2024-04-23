#include <iostream>

using namespace std;

int main() {
    int n;
    int evenNumber;
    int oddNumber;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int number;
        cin >> number;

        if (number % 2 == 0) {
            evenNumber += number;
        }
        else {
            oddNumber += number;
        }
    }

    cout << evenNumber - oddNumber;

    return 0;
}
