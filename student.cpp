#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int marks;

public:
    // Constructor to initialize values
    Student(string n, int m) {
        name = n;
        marks = m;
    }

    // Member function to display details
    void display() {
        cout << "Student Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    // Creating object and initializing using constructor
    Student s1("Rahul", 85);

    // Displaying student details
    s1.display();

    return 0;
}