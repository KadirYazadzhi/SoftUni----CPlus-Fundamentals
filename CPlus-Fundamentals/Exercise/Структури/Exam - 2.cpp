#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

struct People {
    char first_name[20];
    char last_name[20];
    char egn[11];
};

bool compareByEgn(const People &a, const People &b) {

    return strcmp(a.egn, b.egn) < 0;
}

int main() {
    int n;
    cin >> n;

    char old;

    People peoples[50];

    for (int i = 0; i < n; i++) {
        cin >> peoples[i].first_name;
        cin >> peoples[i].last_name;
        cin >> peoples[i].egn;
    }

    sort(peoples, peoples + n, compareByEgn);

    for (int i = n - 1; i >= 0; i--) {
        cout << "Име: " << peoples[i].first_name << " " << peoples[i].last_name << ", ЕГН: " << peoples[i].egn << endl;
    }

    return 0;
}
