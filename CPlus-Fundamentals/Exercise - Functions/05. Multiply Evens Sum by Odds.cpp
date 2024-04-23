#include <iostream>

using namespace std;

int sumDigits(int number, const bool& even) {
    int result = 0;

    while (number != 0) {
        int digit = number % 10;
        bool remainderIsZero = digit % 2 == 0;

        if (remainderIsZero == even) {
            result += digit;
            number /= 10;
        }
    }

    return result;
}

int main() {
    int number;
    cin >> number;

    int evenSum = sumDigits(number, true);
    int oddSum = sumDigits(number, false);

    int result = evenSum * oddSum;
    cout << result << endl;
}
