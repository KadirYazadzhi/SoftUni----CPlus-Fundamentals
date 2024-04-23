#include <iostream>

using namespace std;

void readArray(int arr[], const int& n) {
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void printArray(int arr[], const int& n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void shiftArray(int arr[], const int& n) {
    int first = arr[0];
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = first;
}

int main() {
    constexpr int MAX_N = 100;
    int arr[MAX_N];

    int n;
    cin >> n;

    readArray(arr, n);

    int shifts;
    cin >> shifts;

    shifts %= n;

    for (int i = 0; i < shifts; i++) {
        shiftArray(arr, n);
    }

    shiftArray(arr, n);
}