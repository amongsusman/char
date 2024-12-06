/*
Name: Tyler Zhang
Program Name: Character Function Practice
Date: 12/6/24
Extra: None
*/
#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int main() {
    string name;
    bool good = false;
    while (!good) {
        good = true;
        cout << "Enter your name please." << endl;
        getline(cin, name);
        for (int i = 0; i < name.length(); i++) {
            if (!isspace(name[i]) && !isalpha(name[i])) {
                good = false;
                break;
            }
        }
    }
    for (int i = 0; i < name.length(); i++) {
        name[i] = toupper(name[i]);
    }
    cout << name << endl;
    return 0;
}