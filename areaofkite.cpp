#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double d1;
    double d2;
    double area;
    cout << "This is a simple C++ program for calculating the area of a kite" << endl;
    cout << "Please enter the first diagonal: ";
    cin >> d1;
    cout << "Please enter the second diagonal: ";
    cin >> d2;
    area = (1.0/2.0) * d1 * d2;
    cout << "The area of the kite is " << area  << "cm²" << endl;
    return 0;
}