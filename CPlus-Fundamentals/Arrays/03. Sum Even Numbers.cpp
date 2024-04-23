#include <iostream>

using namespace std;

int main() {
    int n;
    int EvenNumber = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int number;
        cin >> number;

        if (number % 2 == 0) {
            EvenNumber += number;
        }
    }
    cout << EvenNumber << endl;

    return 0;

}

