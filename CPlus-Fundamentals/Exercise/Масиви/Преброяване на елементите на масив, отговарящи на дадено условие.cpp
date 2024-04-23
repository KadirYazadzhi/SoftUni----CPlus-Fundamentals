#include <iostream>

using namespace std;

int main() {
    int br;
    int n;
    cout << "Въведете броя на дните в месеца: ";
    cin >> n;

    double k;
    cout << "Въведете специфично търсенето число: ";
    cin >> k;

    double arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] == k) {
            br++;
        }
    }

    cout << "Броя на елементите отговарящи на условието е: " << br << endl;
}
