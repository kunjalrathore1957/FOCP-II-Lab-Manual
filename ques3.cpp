#include <iostream>
using namespace std;

int main() {
     float temp, convertedTemp;
    int choice;

    cout << "Temperature Conversion Menu\n";
    cout << "1. Fahrenheit to Celsius\n";
    cout << "2. Celsius to Fahrenheit\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temp;
        convertedTemp = (temp - 32) * 5 / 9;
        cout << "Temperature in Celsius = " << convertedTemp << endl;
    }
    else if (choice == 2) {
        cout << "Enter temperature in Celsius: ";
        cin >> temp;}
    else {
        cout << "Invalid choice!" << endl;
    }


    return 0;
}