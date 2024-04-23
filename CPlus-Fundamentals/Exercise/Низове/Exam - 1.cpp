#include <iostream>
#include <sstream>
#include <cstring>

using namespace std;

int main() {
    char input[100];
    cin >> input;

    istringstream iss(input);

    char word[100];
    int b;

    while (iss >> word) {
        b = strlen(word);
        if (b > strlen(word)) {
            b = strlen(word);
        }
    }

    cout << b << endl;

    return 0;
}
