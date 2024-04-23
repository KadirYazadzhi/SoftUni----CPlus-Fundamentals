#include <iostream>

using namespace std;

int main() {
    double a;
    double b;
    double c;
    cin >> a >> b >> c;

    int counter = 0;

    if (a == 0 || b == 0 || c == 0) {
        cout << "+" << endl;
    }
    else {
        if (a < 0) {
            counter++;
        }
        if (b < 0) {
            counter++;
        }
        if (c < 0) {
            counter++;
        }

        if (counter % 2 == 0) {
            cout << "+" << endl;
        }
        else {
            cout << "-" << endl;
        }
    }

}