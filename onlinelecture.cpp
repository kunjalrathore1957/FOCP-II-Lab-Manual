#include <iostream>
using namespace std;

class Course {
private:
    string courseName;
    string instructorName;
    int duration; // in weeks

public:
    // Constructor to initialize course details
    Course(string cname, string iname, int dur) {
        courseName = cname;
        instructorName = iname;
        duration = dur;
    }

    // Function to display course details
    void display() {
        cout << "Course Name: " << courseName << endl;
        cout << "Instructor: " << instructorName << endl;
        cout << "Duration: " << duration << " weeks" << endl;
        cout << "--------------------------" << endl;
    }

    // Destructor
    ~Course() {
        cout << "Course \"" << courseName << "\" has been deleted from memory." << endl;
    }
};

int main() {
    // Creating two course objects
    Course c1("C++ Programming", "Dr. Sharma", 6);
    Course c2("Data Structures", "Prof. Mehta", 8);

    // Display course details
    cout << "Course 1 Details:" << endl;
    c1.display();

    cout << "Course 2 Details:" << endl;
    c2.display();

    return 0;
}