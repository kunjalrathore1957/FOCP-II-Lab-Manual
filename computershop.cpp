#include <iostream>
using namespace std;

class Laptop {
private:
    string brand;
    int ram;
    int price;

public:
    // 1. set only brand
    void setDetails(string b) {
        brand = b;
        ram = 0;      // default value
        price = 0;    // default value
    }

    // 2. set brand and RAM
    void setDetails(string b, int r) {
        brand = b;
        ram = r;
        price = 0;    // default value
    }

    // 3. set brand, RAM, and price
    void setDetails(string b, int r, int p) {
        brand = b;
        ram = r;
        price = p;
    }

    // Display function
    void display() {
        cout << "Brand: " << brand << endl;
        cout << "RAM: " << ram << " GB" << endl;
        cout << "Price: " << price << endl;
        cout << "------------------------" << endl;
    }
};

int main() {
    // Creating objects
    Laptop l1, l2, l3;

    // Calling overloaded functions
    l1.setDetails("Dell");                 // only brand
    l2.setDetails("HP", 8);                // brand + RAM
    l3.setDetails("Lenovo", 16, 75000);    // brand + RAM + price

    // Display details
    cout << "Laptop 1 Details:" << endl;
    l1.display();

    cout << "Laptop 2 Details:" << endl;
    l2.display();

    cout << "Laptop 3 Details:" << endl;
    l3.display();

    return 0;
}