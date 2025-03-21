#include <iostream>
#include <string>
#include <cctype>
using namespace std;
bool stringtest(string inputnumber);

int main () {
    string inputnumber;
    int myvalue;
    bool controller = true;
    cout << " Enter an integer value between 5 and 10.\n";
    
    while (controller == true)
    {
        cin >> inputnumber;
        if (stringtest(inputnumber) == false) {
            cout << "sorry!, you have entered an invalid number, please try again\n";
        }
        else {
            myvalue = stoi(inputnumber);
            if (myvalue >= 5 & myvalue <= 10) {
                controller = false;
            }
            else{
                cout << "you have entered " << myvalue << ". please enter a number between 5 and 10.\n";
            } 
        }    
    }
    cout << "your input value(" << myvalue << ") has been accepted." << endl;
    return 0;   
}

bool stringtest(string inputnumber) {
    for (char ch : inputnumber) {
        if(!isdigit(ch)) {
            return false;
        }
    }
    return true;
}