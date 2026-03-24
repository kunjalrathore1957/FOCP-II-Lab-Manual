#include <iostream>
using namespace std;

class Mobile {
private:
    string brand;
    float price;
    int storage; // in GB

public:
    // 1. Constructor with only brand
    Mobile(string b) {
        brand = b;
        price = 0;      // default value
        storage = 0;    // default value
    }

    // 2. Constructor with brand and price
    Mobile(string b, float p) {
        brand = b;
        price = p;
        storage = 0;    // default storage
    }

    // 3. Constructor with brand, price, and storage
    Mobile(string b, float p, int s) {
        brand = b;
        price = p;
        storage = s;
    }

    // Display function
    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Price: " << price << endl;
        cout << "Storage: " << storage << " GB" << endl;
        cout << "--------------------------" << endl;
    }
};

int main() {
    // Creating objects using different constructors
    Mobile m1("Samsung");                 // only brand
    Mobile m2("Apple", 80000);            // brand + price
    Mobile m3("OnePlus", 45000, 256);     // brand + price + storage

    // Display details
    cout << "Mobile 1 Details:" << endl;
    m1.display();

    cout << "Mobile 2 Details:" << endl;
    m2.display();

    cout << "Mobile 3 Details:" << endl;
    m3.display();

    return 0;
}