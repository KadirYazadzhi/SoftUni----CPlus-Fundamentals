#include <iostream>

using namespace std;

void readCharArray(char words[]) {
    cin >> words;
}

void printCharArray(char words[]) {
    cout << words;
}

int main() {
    char words[30];

    readCharArray(words);

    printCharArray(words);
}
