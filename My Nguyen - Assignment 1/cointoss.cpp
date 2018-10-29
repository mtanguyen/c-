//
//  File Name: cointoss.cpp
//  Course: COP3331 F 8-11am
//  Purpose: This program simulates a coin toss and determines if it is realistic or not.
//  Created by My Nguyen on 1/24/17.
//  Copyright © 2017 My Nguyen. All rights reserved.
//

#include <iostream>
#include <stdlib.h>     // Contains prototypes for functions srand and rand
#include <ctime>        // Needed for time function
#include <stdio.h>      // Needed for NULL function

using namespace std;

// Function prototypes
bool tossCoin ();
bool testSimulation (int tails, int heads);

int main()
{

    // Initialize variables
    int num, tails = 0, heads = 0;
    int i;
    bool toss;
    srand (time (NULL));    // srand generates a different succession of results

    // Ask user for number of times coin should be tossed
    cout << "Enter the number of times you want to toss the coin: ";
    cin >> num;

    // Coin should be tossed at least 10 times
    if (num < 10){
        cout << "The number of tosses must be greater than 10. Re-enter: ";
        cin >> num;
    }

    for (i = 0; i < num; i++)
    {
        toss = tossCoin();

        if (toss)
        {
            tails++;            // Count number of tails occurred from toss
            cout << "Tails ";
        }
        else
        {
            cout << "Heads ";   // Otherwise count number of heads
        }

        // Set output to have 10 tosses printed per line
        if ((i + 1) % 10 == 0)
        {
            cout << endl;
        }
    }

    // Prints out number of heads and tails within the toss
    cout << "\n";
    cout << "The total number of Heads was " << num - tails << endl;
    cout << "The total number of Tails was " << tails << endl;

    // Determine if the simulation was perfect
    if (testSimulation(tails, num - tails))
        cout << "This simulation is realistic.\n";
    else
        cout << "This simulation is not realistic.\n";

    return 0;

}

// Random generation of the tossing of the coin with heads or tails outcome
bool tossCoin ()
{
    return rand () % 2;
}

// Calculates the realism of the toss and returns the percentage of the toss
bool testSimulation (int tails, int heads)
{

    double percentage = 100 * tails / (tails + heads);

    return (percentage >= 45 && percentage <= 55);
}
