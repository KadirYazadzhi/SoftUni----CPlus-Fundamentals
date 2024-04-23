#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    cout << "Моля, въведете името на текстовия файл: ";
    string fileName;
    cin >> fileName;

    ifstream file(fileName);

    if (!file.is_open()) {
        cerr << "Грешка: Неуспешно отваряне на файл: " << fileName << endl;
        return 1;
    }

    int wordCount = 0;
    string word;
    while (file >> word) {
        wordCount++;
    }

    cout << "Файлът " << fileName << " съдържа " << wordCount << " думи." << endl;

    file.close();

    return 0;
}

