#include <iostream>
#include <climits>

using namespace std;

void readArray(int arr[], const int& n) {
    for (int i = 0; i <= n; i++) {
        cin >> arr[i];
    }
}

void returnFromArray(int arr[], const int& n, int& min, int& max, int& average) {
    int min = INT_MAX;
    int max = INT_MIN;
    int average = 0;

    int i = 0;
    for (i = 0; i <= n; i++) {
        if (i % 2 != 0) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }
        if (i % 2 == 0) {
            if (arr[i] < min) {
                min = arr[i];
            }
        }
        average += arr[i];
    }
    average = average / i;
}

void reverseArrayExtraArray(int arr[], const int& n)
{
    int reversedArr[n];
    for (int i = 0; i < n; i++) {
        reversedArr[i] = arr[n - i - 1];
    }

    for (int i = 0; i < n; i++) {
        cout << reversedArr[i] << " ";
    }
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    readArray(arr, n);
    int min, max, average;
    returnFromArray(arr, n);


    cout << max << " " << min << " " << average << average;
    reverseArrayExtraArray(arr, n);
}


