#include <iostream>

using namespace std;

void readArray(int arr[], const int& n) {
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void findMagicNumber(int arr[], const int& n, int magicNumber) {
    int countFind = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == magicNumber) {
            countFind++;
        }
    }

    if (countFind > 0) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}

int main() {
    int n;
    cout << "Въведете броя на елементите, които желаете да въведете:";
    cin >> n;

    int arr[n];
    cout << "Въведете числата в които да бъде търсено специалното число: ";
    readArray(arr, n);

    int magicNumber;
    cout << "Въведете магическото число което да се търси: ";
    cin >> magicNumber;

    findMagicNumber(arr, n, magicNumber);

    return 0;
}

