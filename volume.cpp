#include <iostream>
using namespace std;

class VolumeCalculator {
public:
    // Volume of cube
    float volume(float side) {
        return side * side * side;
    }

    // Volume of cuboid
    float volume(float length, float breadth, float height) {
        return length * breadth * height;
    }

    // Volume of cylinder
    float volume(float radius, float height) {
        return 3.14 * radius * radius * height;
    }
};

int main() {
    VolumeCalculator v;

    // Calling overloaded functions
    cout << "Volume of Cube: " << v.volume(5) << endl;
    cout << "Volume of Cuboid: " << v.volume(4, 5, 6) << endl;
    cout << "Volume of Cylinder: " << v.volume(3, 7) << endl;

    return 0;
}