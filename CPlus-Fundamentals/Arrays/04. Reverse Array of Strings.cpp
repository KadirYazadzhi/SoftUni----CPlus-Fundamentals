#include <iostream>

using namespace std;

int main() {
    const int MAX_SIZE = 99;
    string words[MAX_SIZE];

    int WordsCount;
    cin >> WordsCount;

    for (int i = 0; i < WordsCount; i++) {
        cin >> words[i];
    }

    for (int i = 0; i < WordsCount / 2; i++) {
        string temp = words[i];
        words[i] = words[WordsCount - i - 1];
        words[WordsCount - i - 1] = temp;
    }

    for (int i = 0; i < WordsCount - 1; i++) {
        cout << words[i] << " ";
    }

    cout << words[WordsCount - 1];

    return 0;
}
