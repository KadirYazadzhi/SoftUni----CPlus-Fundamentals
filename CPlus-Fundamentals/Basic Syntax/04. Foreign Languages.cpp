#include <iostream>

using namespace std;

int main() {
    string name;
    cin >> name;

    if (name == "England" || name == "USA") {
        cout << "English" << endl;
    }
    else if (name == "Mexico" || name == "Argentina" || name == "Spain") {
        cout << "Spanish" << endl;
    }
    else {
        cout << "unknown" << endl;
    }
}
