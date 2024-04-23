#include <iostream>

using namespace std;

void readArray(int arr[], const int& n) {
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

double sumNegativeNumber(int arr[], const int& n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    int n;
    cout << "Въведете броя на елементите, които желаете да въведете:";
    cin >> n;

    int arr[n];
    readArray(arr, n);

    cout << "Сбора на отрицателните числа е: " << sumNegativeNumber(arr, n) << endl;
}
