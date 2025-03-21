#include <iostream>
#include <string>
#include <array>
using namespace std;

int main() {
    string myarray[8] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};

    cout << "Below are the elements that atarts with letter 'B' \n";
    for (int i = 0; i < 8; i++) {
        string x = myarray[i];

        if (x[0] == 'B') {
            cout << x << endl;
        }
    }
    return 0;

}