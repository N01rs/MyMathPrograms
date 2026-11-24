//
// Created by harley on 11/24/26.
//
#include <cmath>
#include <iostream>
using namespace std;
int main() {
    double sidea;
    double sidebb;
    double height;
    double area;
    cout << "This is a simple C++ program for calculating the area of a trapezoid" << endl;
    cout << "Please enter the value for side a: ";
    cin >> sidea;
    cout << "Please enter the value for side b: ";
    cin >> sidebb;
    cout << "Please enter the value for height: ";
    cin >> height;
    area = (1.0/2.0) * (sidea + sidebb) * height;
    cout << "The area of the trapezoid is: " << area << "cm²" << endl;
    return 0;
}