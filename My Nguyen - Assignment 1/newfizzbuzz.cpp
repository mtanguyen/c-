//
//  File Name: newfizzbuzz.cpp
//  Course: COP3331 F 8-11am
//  Purpose: This program prints different words for different multiples of 3, 5, 7, 15, 21, and 35.
//  Created by My Nguyen on 1/20/17.
//  Copyright © 2017 My Nguyen. All rights reserved.
//

#include <iostream>
#include <iomanip>      // Needed for setw()

using namespace std;

int main()
{

    int i;

    // Search for multiples of 3, 5, 7, 15, 21, and 35 in range of 1 - 100
    for (i = 1; i <= 100; i++)
    {

        if (i % 35 == 0)
            // Prints BuzzWoof if number is multiple of 35
            cout << setw (15) << "BuzzWoof\n";
        else if (i % 21 == 0)
            // Prints FizzWoof if number is multiple of 21
            cout << setw (15) << "FizzWoof";
        else if (i % 15 == 0)
            // Prints FizzBuzz if number is multiple of 15
            cout << setw (15) << "FizzBuzz\n";
        else if (i % 7 == 0)
            // Prints Woof if number is multiple of 7
            cout << setw (15) << "Woof";
        else if (i % 5 == 0)
            // Prints Buzz if number is multiple of 5
            cout << setw (15) << "Buzz\n";
        else if (i % 3 == 0)
            // Prints Fizz if number is multiple of 3
            cout << setw (15) << "Fizz";
        else
            cout << setw (15) << i;

    }

    cout << endl;

    return 0;

}
