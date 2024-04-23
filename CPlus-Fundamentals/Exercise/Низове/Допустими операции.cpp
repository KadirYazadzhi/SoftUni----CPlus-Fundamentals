#include <iostream>

using namespace std;

int main() {
    char words[31];
    cout << "Въведете низ от цифри: ";
    cin >> words;

    int i = 0;
    while (words[i] != '\0') {
        i++;
    }
    cout << "В низа има общо " << i << " числа.";

    return 0;
}
