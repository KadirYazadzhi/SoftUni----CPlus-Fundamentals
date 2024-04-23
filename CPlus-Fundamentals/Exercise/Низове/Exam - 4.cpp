#include <iostream>

using namespace std;

int main() {
    char words[100];
    cin.getline(words, 100);

    int i = 0;
    int count = 1;
    while (words[i] != '\0') {
        if (words[i] == ' ') {
            count++;
        }
        i++;
    }
    cout << count << endl;
}
