// Copyright (c) 2022 Alex De Meo All rights reserved
//
// Created By: Alex De Meo
// Date: 04s//22
// Description: Calculates the area of a triangle with the user's input
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::stof;

// calculates the area of the triangle with the inputted base and height
void CalculateArea(float baseflt, float heightflt) {
    float area = (baseflt * heightflt) / 2;
    cout << "The area of your triangle is " << area << " cm^2";
}


int main() {
    // getting user input
    string height;
    cout << "Enter the height in cm: ";
    cin >> height;

    string base;
    cout << "Enter the base length in cm: ";
    cin >> base;

    try {
        // coverting to float
        float baseflt = stof(base);
        float heightflt = stof(height);
        // only calls function if inputted numbers are positive
        if (heightflt > 0 && baseflt > 0) {
            // calls function with arguments baseflt and heightflt
            CalculateArea(heightflt, baseflt);
        } else {
            cout << "Numbers can't be negative.";
        }
    } catch (...) {
        cout << "Inputted numebrs must be valid";
    }
}
