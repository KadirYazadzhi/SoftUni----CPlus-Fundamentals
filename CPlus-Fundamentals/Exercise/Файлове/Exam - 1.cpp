#include <iostream>
#include <fstream>

using namespace std;

structure Students {
    char first_name[20];
    char second_name[20];
    char last_name[20];
    double average;
    char egn[11];
};

void structureWriteFromConsoleAndPrintInFile(char first_name[20], char second_name[20], char last_name[20], double average, char egn[11], const int& n) {
    for (int i = 0; i <= n; i++) {
        cout << "Fisrt name: ";
        cin >> student.first_name;
        cout << "Second name: ";
        cin >> student.second_name;
        cout << "Last name: ";
        cin >> student.last_name;
        cout << "Average grade: ";
        cin >> student.average;
        cout << "EGN: ";
        cin >> student.egn;

        file << student.first_name << " ";
        file << student.second_name << " ";
        file << student.last_name << " ";
        file << student.average << " ";
        file << student.egn << endl;

    }
    file.seekg(0);
}

void printFromFile(const int& n;) {
    for (int i = 0; i <= n; i++) {
        file << student.first_name;
        file << student.second_name;
        file << student.last_name;
        file << student.average;
        file << student.egn;
    }
    if (student.average >= 4 && student.average <= 5) {
        cout << student.first_name << " ";
        cout << student.second_name << " ";
        cout << student.last_name << " ";
    }
}
int main() {
    Students student;
    fstream file;
    file.open("output.txt", ios::in, fstream::app);

    int n;
    int i;
    cout << "Въведете броя на учениците: ";
    cin >> n;

    structureWriteFromConsoleAndPrintInFile(student.first_name, student.second_name, student.last_name, student.average, student.egn, n );
    printFromFile(n);

    return 0;
}
