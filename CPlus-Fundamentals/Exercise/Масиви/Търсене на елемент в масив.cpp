#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Въведете броя на елементите: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cout << "Въведете специфично търсеното число: " << endl;
    cin >> k;

    for (int i = 0; i < n; i++) {
        if (arr[i] == k) {
            cout << "Намерето е търсенето от вас число, което е: " << k << endl;
        }
        else {
            cout << "Не е намерено търсеното от вас число." << endl;
        }
    }
}
