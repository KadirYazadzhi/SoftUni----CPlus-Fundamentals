#include <iostream>

using namespace std;

int main() {
    char words[100];
    cin >> words;

    cout << "Въведете номера на елемента които искате да достъпите: ";
    int i;
    cin >> i;

    cout << words[i - 1];
}
