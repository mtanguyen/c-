//
//  File Name: FractImp.cpp
//  Course: COP3331 F 8-11am
//  Purpose: This program performs basic math operations on fractions.
//  Purpose of this file: The FractImp.cpp file is an implementation file that contains the function definitions for the constuctor, mutator, and operator functions.
//  Created by My Nguyen on 02/15/17.
//  Copyright © 2017 My Nguyen. All rights reserved.
//

#include <iostream>          // Needed for istream and ostream
#include "Fraction.h"        // Need to include header file
using namespace std;

// Function greatest common divisor.
int gcdr(int numerator, int denominator)
{
    if (denominator == 0)
        return numerator;

    return gcdr(denominator, numerator % denominator);
}

// Definition of simplify function that simplifies the resulting fraction.
void Fraction::simplify()
{
    int temp = gcdr(numerator, denominator);
    numerator = numerator / temp;
    denominator = denominator / temp;
}

// Function definition for constructor that takes no parameters but initializes numerator and denominator to 0 and 1, respectively.
Fraction::Fraction()
{
    numerator = 0;
    denominator = 1;
}

// Function definition for mutators for numerator and denominator.
void Fraction::setNumerator(int a)
{
    numerator = a;
}

void Fraction::setDenominator(int b)
{
    denominator = b;
}

// Accessor functions for numerator and denominator.
int Fraction::getNumerator() const
{
    return numerator;
}

int Fraction::getDenominator() const
{
    return denominator;
}

// Function definitions for +, -, *, and /.
Fraction Fraction::operator + (const Fraction &right)
{
    Fraction temp;

    // Add a safety guard in case the denominators are the same.
    if (denominator != right.denominator)
    {
        temp.numerator = (numerator*right.denominator) + (right.numerator*denominator);
        temp.denominator = denominator * right.denominator;
    }
    else
    {
        temp.numerator = numerator + right.numerator;
        temp.denominator = denominator;
    }

    temp.simplify();
    return temp;
}

Fraction Fraction::operator - (const Fraction &right)
{
    Fraction temp;

    // Add a safety guard in case the denominators are the same.
    if (denominator != right.denominator)
    {
        temp.numerator = (numerator*right.denominator) - (right.numerator*denominator);
        temp.denominator = denominator * right.denominator;
    }
    else
    {
        temp.numerator = numerator - right.numerator;
        temp.denominator = denominator;
    }

    temp.simplify();
    return temp;
}

Fraction Fraction::operator * (const Fraction &right)
{
    Fraction temp;

    // Multiply across.
    temp.numerator = numerator * right.numerator;
    temp.denominator = denominator * right.denominator;
    temp.simplify();
    return temp;
}

Fraction Fraction::operator / (const Fraction &right)
{
    Fraction temp;

    // Cross multiply.
    temp.numerator = numerator * right.denominator;
    temp.denominator = denominator * right.numerator;
    temp.simplify();
    return temp;
}

// Overload the operator <<.
ostream & operator << (ostream & os, const Fraction & fraction)
{
   // Note that we print out a / as it is simply easier to do so!
   os << fraction.numerator << " / " << fraction.denominator;
   return os;
}

// Overload the operator >>.
istream & operator>> (istream & is, Fraction & fraction)
{
   char ch;

   is >> fraction.numerator;     //get the numerator
   is >> ch;                     //read and discard the '/'
   is >> fraction.denominator;   //get the denominator

   return is;
}
