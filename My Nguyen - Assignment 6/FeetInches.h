//
//  File Name: FeetInches.h
//  Course: COP3331 F 8-11am
//  Purpose: This header file is a modification of FeetInches.h with a replacement of + and - overloaded functions.
//  Created by My Nguyen on 04/05/17.
//  Copyright © 2017 My Nguyen. All rights reserved.
//

#ifndef FEETINCHES_H
#define FEETINCHES_H
#include<iostream>
using namespace std;

// The FeetInches class holds distances or measurements expressed in feet and inches.
class FeetInches
{

    private:
       int feet;        // To hold a number of feet
       int inches;      // To hold a number of inches

    public:
       // Constructor
       FeetInches(int f = 0, int i = 0)
       {
           feet = f;
           inches = i;
       }

       // Mutator functions
       void setFeet(int f)
       {
           feet = f;
       }

       void setInches(int i)
       {
           inches = i;
       }

       // Accessor functions
       int getFeet() const
       {
           return feet;
       }

       int getInches() const
       {
           return inches;
       }

       bool operator > (const FeetInches &right)
       {
           bool feet = false;

           if (feet > right.feet)
           {
               feet = true;
           }
           else if (feet == right.feet)
           {
               feet = true;
           }
           else
           {
               feet = false;
           }

           return feet;
       }

       bool operator < (const FeetInches &right)
       {
           bool feet = false;

           if (feet > right.feet)
           {
               feet = true;
           }
           else if (feet == right.feet)
           {
               feet = true;
           }
           else
           {
               feet = false;
           }

           return feet;
       }

       // Overload operator functions for << and >>.
       friend ostream & operator<< (ostream & os, const FeetInches& feetInches)         // Overload <<
       {
          // Note that we print out feet, inches it is simply easier to do so!
          os << feetInches.feet << " feet, " << feetInches.inches << " inches";

          return os;
       }

       friend istream & operator>> (istream & is, FeetInches& feetInches)        // Overload >>
       {
          char ch;

          is >> feetInches.feet;        // get the feet integer
          is >> ch;                     //read and discard the ','
          is >> feetInches.inches;      //get the inches integer

          return is;
       }

};
#endif
