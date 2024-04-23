#include <iostream>

using namespace std;

int main() {
    cout << "Въведете броя на елементите: ";
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    cout << "Общата сума е: " << sum << endl;
}

