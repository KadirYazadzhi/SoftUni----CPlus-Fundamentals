#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    getline(cin, text);

    int sum = 0;
    for(char c : text) {
        if(isdigit(c)) {
            sum += (c - '0');
        }
    }


    if((sum >= 65 && sum <= 90) || (sum >= 97 && sum <= 122)) {
        cout << char(sum) << endl;
    } else {
        cout << sum << endl;
    }

    return 0;
}
