#include <iostream>
#include <cmath>
#include <numbers>
using namespace std;

int main() {
    cout << "This is a simple C++ program for calculating the volume of a tube" << endl;
    double r;
    double t;
    double volume;
    cout << "Please enter the radius: ";
    cin >> r;
    cout << "Please enter the tube length: ";
    cin >> t;
    volume = std::ceil(numbers::pi * r * r * t);
    cout << "The volume of the tube is " << volume << "cm³" << endl;
    return 0;
}