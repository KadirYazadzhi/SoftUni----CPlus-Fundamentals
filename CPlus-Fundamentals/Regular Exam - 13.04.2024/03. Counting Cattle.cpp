#include <iostream>
#include <vector>
#include <map>
#include <iomanip>

using namespace std;

namespace CattleUtils {

    struct Cattle {
        char code;
        int size;
    };

    class CattleCounter {
    private:
        vector<Cattle> cows;
        vector<Cattle> sheep;
        vector<Cattle> others;

    public:
        void AddCattle(const Cattle& cattle) {
            if (cattle.code == 'C') {
                cows.push_back(cattle);
            }
            else if (cattle.code == 'S') {
                sheep.push_back(cattle);
            }
            else {
                others.push_back(cattle);
            }
        }

        double CalculateAverageSize(const std::vector<Cattle>& cattleList) {
            int totalSize = 0;
            for (const auto& cattle : cattleList) {
                totalSize += cattle.size;
            }
            return static_cast<double>(totalSize) / cattleList.size();
        }

        void PrintCountsAndAverages() {
            cout << fixed << setprecision(2); // Задаване на фиксиран брой цифри след десетичната запетая

            if (cows.empty()) {
                cout << "no cows!" << endl;
            } else {
                cout << cows.size() << " cows:";
                for (const auto& cow : cows) {
                    cout << " C" << cow.size;
                }
                cout << " with avg. size " << fixed << setprecision(2) << CalculateAverageSize(cows) << endl;
            }

            if (sheep.empty()) {
                cout << "no sheep!" << endl;
            } else {
                cout << sheep.size() << " sheep:";
                for (const auto& s : sheep) {
                    cout << " S" << s.size;
                }
                cout << " with avg. size " << fixed << setprecision(2) << CalculateAverageSize(sheep) << endl;
            }

            if (others.empty()) {
                cout << "no others!" << endl;
            } else {
                cout << others.size() << " others:";
                for (const auto& other : others) {
                    cout << " " << other.code << other.size;
                }
                cout << " with avg. size " << fixed << setprecision(2) << CalculateAverageSize(others) << endl;
            }
        }


    };
}

int main() {
    CattleUtils::CattleCounter cattleCounter;

    string input;
    getline(std::cin, input);

    string delimiter = " ";
    size_t pos = 0;
    string token;
    while ((pos = input.find(delimiter)) != string::npos) {
        token = input.substr(0, pos);
        char code = token[0];
        int size = token[1] - '0';
        CattleUtils::Cattle cattle = { code, size };
        cattleCounter.AddCattle(cattle);
        input.erase(0, pos + delimiter.length());
    }
    char code = input[0];
    int size = input[1] - '0';
    CattleUtils::Cattle cattle = { code, size };
    cattleCounter.AddCattle(cattle);

    cattleCounter.PrintCountsAndAverages();

    return 0;
}
