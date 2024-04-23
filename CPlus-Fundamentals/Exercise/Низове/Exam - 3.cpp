#include <iostream>

using namespace std;

int main() {
    char words[100];
    cin.getline(words, 100);

    int i = 0;
   while (words[i] != '\0') {
       if (words[i] != ' ') {
           cout << words[i];
       }
       else {
           cout << endl;
       }
       i++;
   }
   return 0;
}
