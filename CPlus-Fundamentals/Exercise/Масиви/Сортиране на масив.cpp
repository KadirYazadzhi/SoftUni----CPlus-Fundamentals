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
}

int main() {
    int n;
    cout << "Въведете броя на елементите: ";
    cin >> n;

    int arr[n];
    readArray(arr, n);

    int min;
    int swap;
    int k;

    for (int i = 0; i < n - 1; i++) {
        k = i;
        min = arr[i];

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < min) {
                min = arr[j];
                k = j;
            }

            swap = arr[k];
            arr[k] = arr[i];
            arr[i] = swap;
        }
        printArray(arr, n);
    }

    return 0;
}