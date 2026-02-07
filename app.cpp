#include<iostream>
using namespace std ;
int main() {
    float mark1, mark2, mark3, average;


    cout << "Enter marks of three students: ";
    cin >> mark1 >> mark2 >> mark3;

    
    average = (mark1 + mark2 + mark3) / 3;

    
    cout << "Average marks = " << average << endl;

    return 0;
}
