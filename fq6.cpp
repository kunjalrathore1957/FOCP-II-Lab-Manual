#include <iostream>
using namespace std;

double add(double a, double b) { return a + b; }
double sub(double a, double b) { return a - b; }
double mul(double a, double b) { return a * b; }
double divi(double a, double b) { return a / b; }

int main() {
    int choice;
    double a, b;

    cin >> choice >> a >> b;

    if (choice == 1) cout << add(a, b);
    else if (choice == 2) cout << sub(a, b);
    else if (choice == 3) cout << mul(a, b);
    else if (choice == 4) cout << divi(a, b);

    return 0;
}