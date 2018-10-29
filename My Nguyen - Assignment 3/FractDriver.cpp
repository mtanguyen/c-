//
//  File Name: FractDriver.cpp
//  Course: COP3331 F 8-11am
//  Purpose: This program performs basic math operations on fractions.
//  Purpose of this file: The FractDriver.cpp file is a driver program that tests the class and operator overloads.
//  Created by My Nguyen on 02/15/17.
//  Copyright © 2017 My Nguyen. All rights reserved.
//

#include <iostream>
#include "Fraction.h"
using namespace std;

int main()
{
    // Two Fraction objects
    Fraction fraction1;
    Fraction fraction2;

    // Temp fractions for +, -, *, /
    Fraction tempPlus, tempMinus, tempMultiply, tempDivide;

    // Get a fraction from user
    cout << "Enter the first fraction in the form a/b:" ;
    cin >> fraction1;

    // Get another fraction from user
    cout << "Enter the second fraction in the form a/b:" ;
    cin >> fraction2;

    // Display the fractions in the two fraction objects
    cout << "Fraction 1 = " << fraction1.getNumerator() << " / " << fraction1.getDenominator() << endl;
    cout << "Fraction 2 = " << fraction2.getNumerator() << " / " << fraction2.getDenominator() << endl;

    // Do calculations for +, -, *, /
    tempPlus = fraction1 + fraction2;
    tempMinus = fraction1 - fraction2;
    tempMultiply = fraction1 * fraction2;
    tempDivide = fraction1 / fraction2;

    // Display the +, -, *, / operations on the fractions
    cout << fraction1.getNumerator() << " / " << fraction1.getDenominator() << " + " << fraction2.getNumerator() << " / " << fraction2.getDenominator() << " = " << tempPlus.getNumerator() << " / " << tempPlus.getDenominator() << endl;
    cout << fraction1.getNumerator() << " / " << fraction1.getDenominator() << " - " << fraction2.getNumerator() << " / " << fraction2.getDenominator() << " = " << tempMinus.getNumerator() << " / " << tempMinus.getDenominator() << endl;
    cout << fraction1.getNumerator() << " / " << fraction1.getDenominator() << " * " << fraction2.getNumerator() << " / " << fraction2.getDenominator() << " = " << tempMultiply.getNumerator() << " / " << tempMultiply.getDenominator() << endl;
    cout << fraction1.getNumerator() << " / " << fraction1.getDenominator() << " / " << fraction2.getNumerator() << " / " << fraction2.getDenominator() << " = " << tempDivide.getNumerator() << " / " << tempDivide.getDenominator() << endl;
}
