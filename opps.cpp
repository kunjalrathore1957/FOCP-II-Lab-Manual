#include <iostream>
 using namespace std;

class student
{
    int rollno, marks1, marks2, marks3;
    string name;
    public:
    void inputdetails() //setter
    {
        cout << "\nEnter rollno: ";
        cin >> rollno;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter marks1, marks2, marks3: ";
        cin >> marks1 >> marks2 >> marks3;
    }
    
    void displayDetails() //getter
    {
        cout << "\n--- Student Details ---" << endl;
        cout << "Roll No: " << rollno << endl;
        cout << "Name: " << name << endl;
        cout << "Marks 1: " << marks1 << endl;
        cout << "Marks 2: " << marks2 << endl;
        cout << "Marks 3: " << marks3 << endl;
    }
};

int main()
{
    student s1; 
    s1.inputdetails();
    s1.displayDetails();
    return 0;
}