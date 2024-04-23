#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main() {
    string input;
    getline(cin, input);
    istringstream iss(input);
    vector<int> targets;
    int num;

    while (iss >> num) {
        targets.push_back(num);
    }

    string command;
    int counter = 0;

    while (getline(cin, command) && command != "End") {
        int indexTarget = stoi(command);

        if (indexTarget >= 0 && indexTarget < targets.size()) {
            int temp = targets[indexTarget];

            for (int i = 0; i < targets.size(); i++) {
                if (targets[i] != -1 && i != indexTarget) {
                    if (targets[i] > temp) {
                        targets[i] -= temp;
                    } else if (targets[i] <= temp) {
                        targets[i] += temp;
                    }
                }
            }
            targets[indexTarget] = -1;
            counter++;
        }
    }

    cout << "Shot targets: " << counter << " -> ";
    for (int i = 0; i < targets.size(); i++) {
        if (i > 0) cout << " ";
        cout << targets[i];
    }
    cout << endl;

    return 0;
}
