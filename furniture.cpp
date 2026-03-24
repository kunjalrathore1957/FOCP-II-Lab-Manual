#include <iostream>
using namespace std;

class Table {
private:
    string material;
    int price;
    int legs;

public:
    // 1. Default constructor
    Table() {
        material = "Wood";
        price = 5000;
        legs = 4;
    }

    // 2. Constructor with material and price
    Table(string m, int p) {
        material = m;
        price = p;
        legs = 4; // default legs
    }

    // 3. Constructor with material, price, and legs
    Table(string m, int p, int l) {
        material = m;
        price = p;
        legs = l;
    }

    // Function to display details
    void display() {
        cout << "Material: " << material << endl;
        cout << "Price: " << price << endl;
        cout << "Number of legs: " << legs << endl;
        cout << "----------------------" << endl;
    }
};

int main() {
    // Creating objects using different constructors
    Table t1;                      // Default constructor
    Table t2("Metal", 7000);       // Material and price
    Table t3("Glass", 12000, 3);   // Material, price, and legs

    // Display details
    cout << "Table 1 Details:" << endl;
    t1.display();

    cout << "Table 2 Details:" << endl;
    t2.display();

    cout << "Table 3 Details:" << endl;
    t3.display();

    return 0;
}