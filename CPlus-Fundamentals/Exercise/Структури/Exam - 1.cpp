#include <iostream>
#include <string>

using namespace std;

struct peopleData {
    char first_name[20];
    char middle_name[20];
    char last_name[20];
    char egn[20];
    char city[30];
};

int main() {
    peopleData person;
    int n;
    cout << "Изберете броя на елементите които ще въведете: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Въведете първо име: ";
        cin >> person.first_name;

        cout << "Въведете презиме: ";
        cin >> person.middle_name;

        cout << "Въведете фамилия: ";
        cin >> person.last_name;

        cout << "Въведете ЕГН: ";
        cin >> person.egn;

        cout << "Въведете град: ";
        cin >> person.city;

    }

    cout << "Името, презимето и фамилията на човека са " << person.first_name
    << " " << person.middle_name << " " << person.last_name
    << ", чието ЕГН е " << person.egn << " и живее в град " << person.city << " ."<< endl;


}
