#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//Count symbol in file

int main() {
    // Поискване на името на текстовия файл от потребителя
    cout << "Моля, въведете името на текстовия файл: ";
    string fileName;
    cin >> fileName;

    // Отваряне на текстовия файл за четене
    ifstream file(fileName);

    // Проверка за успешно отваряне на файла
    if (!file.is_open()) {
        cerr << "Грешка: Неуспешно отваряне на файл: " << fileName << endl;
        return 1;
    }

    // Преброяване на символите във файла
    int characterCount = 0;
    char ch;
    while (file.get(ch)) {
        characterCount++;
    }

    // Извеждане на резултата
    cout << "Файлът " << fileName << " съдържа " << characterCount << " символа." << endl;

    // Затваряне на файла
    file.close();

    return 0;
}

