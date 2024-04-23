#include <iostream>

using namespace std;
/*Да се напише програма, която въвежда и декларира масив от символи,
 * след което извежда колко пъти символът "а" се среща в масива*/

void readArray(char arr[], const int& n) {
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

int countArray(char arr[], const int& n) {
    int br;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 'a'){
            br++;
        }
    }
    return br;
}

int main() {
    int n;
    cout << "Въведете броя на елементите, които желаете да използвате: ";
    cin >> n;

    char arr[n];
    readArray(arr, n);

    if (countArray(arr, n) == 0) {
        cout << "Символът 'а' не беше открит." << endl;
    }
    else {
        cout << "Символът 'а' беше открит " << countArray(arr, n) << " пъти." << endl;
    }

    return 0;
}