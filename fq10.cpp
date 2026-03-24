#include <iostream>
using namespace std;

void callCounter() {
    static int count = 0;
    count++;
    cout << "Called " << count << " times" << endl;
}

int main() {
    callCounter();
    callCounter();
    callCounter();
    callCounter();
    return 0;
}