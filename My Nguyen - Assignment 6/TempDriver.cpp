//
//  File Name: TempDriver.cpp
//  Course: COP3331 F 8-11am
//  Purpose: This program test these templates in a driver program. The template with the following types: int, double, string and FeetInches (which is an object).
//  Created by My Nguyen on 04/05/17.
//  Copyright © 2017 My Nguyen. All rights reserved.
//

#include<iostream>
#include<string>
#include "FeetInches.h"
using namespace std;

// Template definition for minimum function.
template <class T>
T minimum(T x, T y)
{
    if (x > y)
        return y;
    else
        return x;
}

// Template definition for maximum function.
template <class T>
T maximum(T x, T y)
{
    if (x > y)
        return x;
    else
        return y;
}

int main()
{
    int x1, y1;         // To hold integer input
    double x2,y2;       // To hold double input
    string x3, y3;      // To hold string input
    FeetInches x4, y4;  // To hold FeetInches object input

    // Display answers with questions prompted to user for integers
    cout << "Enter two integers: ";
    cin >> x1 >> y1;
    cout << "The minimum of " << x1 << " and " << y1 << " is: ";
    cout << minimum(x1, y1) << endl;
    cout << "The maximum of " << x1 << " and " << y1 << " is: ";
    cout << maximum(x1, y1) << endl;

    // Display answers with questions prompted to user for floating point numbers
    cout << "Enter two floating point numbers: ";
    cin >> x2 >> y2;
    cout << "The minimum of " << x2 << " and " << y2 << " is: ";
    cout << minimum(x2, y2) << endl;
    cout << "The maximum of " << x2 << " and " << y2 << " is: ";
    cout << maximum(x2, y2) << endl;

    // Display answers with questions prompted to user for strings
    cout << "Enter the first string: ";
    cin >> x3;
    cout << "Enter the second string: ";
    cin >> y3;
    cout << "The minimum of " << x3 << " and " << y3 << " is: ";
    cout << minimum(x3, y3) << endl;
    cout << "The maximum of " << x3 << " and " << y3 << " is: ";
    cout << maximum(x3, y3) << endl;

    // Display answers with questions prompted to user for FeetInches objects
    cout << "Enter the first distance (in feet, inches format): ";
    cin >> x4;
    cout << "Enter the second distance (in feet, inches format): ";
    cin >> y4;
    cout << "The minimum of " << x4 << " and " << y4 << " is: ";
    cout << minimum(x4, y4) << endl;
    cout << "The maximum of " << x4 << " and " << y4 << " is: ";
    cout << maximum(x4, y4) << endl;

    return 0;

}
