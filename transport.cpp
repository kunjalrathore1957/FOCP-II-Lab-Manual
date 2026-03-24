#include <iostream>
using namespace std;

class Vehicle {
private:
    string vehicleNumber;
    string ownerName;
    string vehicleType;
    float registrationFee;

public:
    // 1. Default Constructor
    Vehicle() {
        vehicleNumber = "Not Assigned";
        ownerName = "Unknown";
        vehicleType = "General";
        registrationFee = 0;
    }

    // 2. Parameterized Constructor (2 parameters)
    Vehicle(string vNum, string oName) {
        vehicleNumber = vNum;
        ownerName = oName;
        vehicleType = "General";   // default
        registrationFee = 0;       // default
    }

    // 3. Parameterized Constructor (4 parameters)
    Vehicle(string vNum, string oName, string vType, float fee) {
        vehicleNumber = vNum;
        ownerName = oName;
        vehicleType = vType;
        registrationFee = fee;
    }

    // Function to display vehicle details
    void displayVehicle() {
        cout << "Vehicle Number: " << vehicleNumber << endl;
        cout << "Owner Name: " << ownerName << endl;
        cout << "Vehicle Type: " << vehicleType << endl;
        cout << "Registration Fee: " << registrationFee << endl;
        cout << "------------------------------" << endl;
    }
};

int main() {
    // Creating objects using different constructors
    Vehicle v1;   // Default constructor
    Vehicle v2("DL01AB1234", "Rahul");  // 2-parameter constructor
    Vehicle v3("DL02CD5678", "Amit", "Car", 5000);  // 4-parameter constructor

    // Display details
    cout << "Vehicle 1 Details:" << endl;
    v1.displayVehicle();

    cout << "Vehicle 2 Details:" << endl;
    v2.displayVehicle();

    cout << "Vehicle 3 Details:" << endl;
    v3.displayVehicle();

    return 0;
}