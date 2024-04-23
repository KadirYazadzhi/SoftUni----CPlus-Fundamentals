#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

int main() {
    string first_name;
    string last_name;
    string phoneNumber;

    while(cin >> first_name && cin >> last_name && cin >> phoneNumber) {
        cout << "Your first name is " << first_name << " , your last name is " << last_name << " and your phone number is " << phoneNumber << "." << endl;
    }

    fstream file;
    file("output.txt");
    file << "Fist Name: " << first_name << " Last Name: " << last_name << " Phone Number: " << phoneNumber << endl;
}

