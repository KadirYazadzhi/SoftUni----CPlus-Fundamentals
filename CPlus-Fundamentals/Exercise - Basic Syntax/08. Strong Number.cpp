#include <iostream>

using namespace std;

int factorial(int n) {
    int fact = 1;

    for (int i = 0; i <= n; i++) {
    fact *= i;
    }
    return fact;
}

bool isStrongNumber(int num) {
    int originalNum = num;
    int sum = 0;

    while (num > 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }

    return sum == originalNum;
}

int main() {
    int N;
    cin >> N;

    if (isStrongNumber(N)) {
    cout << "yes" << endl;
    }
    else {
    cout << "no" << endl;
    }

    return 0;
}