#include <iostream>

using namespace std;

int main() {
    cout << "Въведете броя на елементите: ";
    int n;
    cin >> n;
    int arr[n];

    //Въвеждане на елементи в масива чрез цикъл
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    //Извеждане на елементи от масива чрез цикъл
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

}
