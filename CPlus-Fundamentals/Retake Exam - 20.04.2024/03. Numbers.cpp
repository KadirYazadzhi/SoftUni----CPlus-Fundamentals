#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string input;
    getline(cin, input);
    istringstream iss(input);

    vector<int> numbers;
    int num;
    while (iss >> num) {
        numbers.push_back(num);
    }

    if (numbers.empty()) {
        cout << "No" << endl;
        return 0;
    }

    long long sum = 0;
    for (int n : numbers) {
        sum += n;
    }
    double average = static_cast<double>(sum) / numbers.size();

    vector<int> top_numbers;
    for (int n : numbers) {
        if (n > average) {
            top_numbers.push_back(n);
        }
    }

    if (top_numbers.empty()) {
        cout << "No" << endl;
        return 0;
    }

    sort(top_numbers.rbegin(), top_numbers.rend());

    int print_count = min(static_cast<int>(top_numbers.size()), 5);
    for (int i = 0; i < print_count; ++i) {
        cout << top_numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
