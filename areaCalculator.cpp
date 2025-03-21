#include <iostream>
#include <string>
namespace wisdom {
    int input_int_value;
    void triangle();
    void rectangle();
    void square();
}
using namespace wisdom;
using namespace std;

int main() {
    string input_value;

    while (true) {
        cout << "Please select the area of the shape to calculate\n";
        cout << "1. Square\n";
        cout << "2. Rectangle\n";
        cout << "3. Triangle\n";
        cout << "4. Quit Program\n"<< endl;
        cout << "Enter selection: ";

        cin >> input_value;
        cout << endl;
        try  {
            input_int_value = stoi(input_value);

            if (input_int_value == 1){
                square();
            }
            else if (input_int_value == 2) {
                rectangle();
            }
            else if (input_int_value == 3) {
                triangle();
            }
            else if (input_int_value == 4) {
                return 0;
            } 
            else {
                cout << "Your input was: " << input_value << " which is an invalid input\n";
                cout << "Please enter a valid input!!!\n" << endl;
            }       
        }
        catch(const invalid_argument& e)   {
            cout << "Your input was: " << input_value << " which is an invalid input\n";
            cout << "Please enter a valid input!!!\n" << endl;
        }
    }
}
void wisdom::triangle() {
    double height, base, area;
    cout << "Enter the value of height followed by value of base\n";
    cin >> height >> base;
    area = 0.5*height*base;
    cout << "The area of your triangle is "<< area << endl << endl;
}
void wisdom::rectangle() {
    double length, width, area;
    cout << "Enter the value of length followed by value of width\n";
    cin >> length >> width;
    if (length > width){
        area = length*width;
        cout << "The area of your rectangle is "<< area << endl << endl;
    }
    else {
        cout << "error!, The length of a rectangle is always gratter than width!!\n\n";
    }
}
void wisdom::square() {
    double length, area;
    cout << "Enter the value of length\n";
    cin >> length;
    area = length*length;
    cout << "The area of your square is "<< area << endl << endl;

}