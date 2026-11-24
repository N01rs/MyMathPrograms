//
// Created by harley on 11/24/26.
//
#include <iostream>
#include <numbers>
#include <cmath>
using namespace std;

int main() {
    cout << "This simple C++ program is for calculating the price after a discount" << endl;
    double price;
    double discount;
    double priceafterdiscount;
    cout << "Please enter the value for price: ";
    cin >> price;
    cout << "Please enter the value for discount: ";
    cin >> discount;
    priceafterdiscount = price - (price * discount/100.0);
    cout << "The price after discount is " << "$" << priceafterdiscount << endl;
}