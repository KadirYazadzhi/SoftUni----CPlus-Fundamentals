#include <iostream>

using namespace std;

void readArray(int arr[], const int& n) {
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    readArray(arr, n);

    int maxRight = arr[n - 1];
    cout << arr[n - 1] << " ";

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > maxRight) {
            maxRight = arr[i];
            cout << arr[i] << " ";
        }
    }

    return 0;
}