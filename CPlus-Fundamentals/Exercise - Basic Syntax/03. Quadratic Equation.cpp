#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a;
    double b;
    double c;

    cin >> a >> b >> c;

    double D = b * b - 4 * a * c;

    if (D < 0) {
        cout << "no roots" << endl;
    }
    else if (D == 0) {
        double x = -b / (2 * a);
        cout << x << endl;
    }
    else {
        double x1 = (-b + sqrt(D)) / (2 * a);
        double x2 = (-b - sqrt(D)) / (2 * a);

        cout << x1 << " " << x2 << endl;
    }
return 0;
}