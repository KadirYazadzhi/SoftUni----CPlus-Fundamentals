#include <iostream>
#include <unordered_map>

using namespace std;

// Функция, която намира най-често срещания символ и броя на срещанията му в даден символен масив
pair<char, int> findMostFrequent(const char array[]) {
    // Инициализиране на асоциативен контейнер (unordered_map), който ще съхранява броя на срещанията на всеки символ
    unordered_map<char, int> frequencyMap;

    // Обхождане на символния масив и актуализиране на броя на срещанията на всеки символ в frequencyMap
    for (int i = 0; array[i] != '\0'; i++) {
        frequencyMap[array[i]]++;
    }

    // Променливи за пазене на най-голямото количество срещания и най-често срещания символ
    int maxFrequency = 0;
    char mostFrequentElement = '\0';

    // Обхождане на асоциативния контейнер, за да намерим символа с най-голям брой срещания
    for (const auto& pair : frequencyMap) {
        if (pair.second > maxFrequency) {
            maxFrequency = pair.second;
            mostFrequentElement = pair.first;
        }
    }

    // Връщане на двойка от символ и брой срещания
    return make_pair(mostFrequentElement, maxFrequency);
}

int main() {
    // Деклариране на символен масив за входящия низ
    char array[100];

    // Въвеждане на низа от стандартния вход
    cout << "Enter a string: ";
    cin.getline(array, 100);

    // Извикване на функцията findMostFrequent и получаване на резултата
    auto result = findMostFrequent(array);

    // Отпечатване на най-често срещания символ и броя на срещанията му
    cout << "Most frequent character: " << result.first << endl;
    cout << "Frequency: " << result.second << endl;

    return 0;
}


