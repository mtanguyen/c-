//
//  File Name: Fraction.h
//  Course: COP3331 F 8-11am
//  Purpose: This program performs basic math operations on fractions.
//  Purpose of this file: The Fraction.h file will hold the class and member function definitions.
//  Created by My Nguyen on 02/15/17.
//  Copyright © 2017 My Nguyen. All rights reserved.
//

#ifndef FRACTION_H
#define FRACTION_H
#include <iostream>     // Need for istream and ostream
using namespace std;

class Fraction
{

    private:
        int numerator;          // The numerator
        int denominator;        // The denominator
        void simplify();        // In FractImp.cpp

    public:
        // The constructor takes no parameters but initializes numerator and denominator to 0 and 1, respectively.
        Fraction();

        // Mutator functions that can update the members with information provided by the user.
        void setNumerator(int a);
        void setDenominator(int b);

        // Accessor functions for numerator and denominator.
        int getNumerator() const;
        int getDenominator() const;

        // Operator functions for +, -, *, and /.
        Fraction operator + (const Fraction &);
        Fraction operator - (const Fraction &);
        Fraction operator * (const Fraction &);
        Fraction operator / (const Fraction &);

        // Overload operator functions for << and >>.
        friend ostream & operator<< (ostream &, const Fraction & );       // Overload <<
        friend istream & operator>> (istream &, Fraction & );             // Overload >>

}; // End class Fraction
#endif
