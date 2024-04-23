#include <iostream>

using namespace std;

int main() {
    int startNumber;
    int endNumber;

    int Sum = 0;

    cin >> startNumber >> endNumber;

    for (int i = startNumber; i <= endNumber; i++) {
        cout << i << " ";
        Sum += i;
    }
    cout << endl;
    cout << "Sum: " << Sum << endl;
}
