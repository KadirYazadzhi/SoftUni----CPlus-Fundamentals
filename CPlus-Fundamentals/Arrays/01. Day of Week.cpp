#include <iostream>

using namespace std;

int main() {
    string days[] {
            "Monday",
            "Tuesday",
            "Wednesday",
            "Thursday",
            "Friday",
            "Saturday",
            "Sunday"
    };

    int dayOfTheWeeks;
    cin >> dayOfTheWeeks;

    if (dayOfTheWeeks < 1 || dayOfTheWeeks > 7) {
        cout << "Invalid day!" << endl;
    }
    else {
        cout << days[dayOfTheWeeks - 1] << endl;
    }

    return 0;
}
