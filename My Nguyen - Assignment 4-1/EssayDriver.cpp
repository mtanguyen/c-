//
//  File Name: EssayDriver.cpp
//  Course: COP3331 F 8-11am
//  Purpose: This program demonstrates a base class and a derived class.
//  Created by My Nguyen on 03/16/17.
//  Copyright © 2017 My Nguyen. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include "Essay.h"
using namespace std;

int main()
{

    double grammarPoints;      // Hold number of grammer points earned
    double spellingPoints;     // Hold number of spelling points earned
    double lengthPoints;       // Hold number of points for length earned
    double contentPoints;      // Hold number of content points earned

    // Prompt user for grammar points.
    cout << "How many grammar points did the student earn? (0 - 30): ";
    cin >> grammarPoints;
    if (grammarPoints > 30.0 || grammarPoints < 0.0)
    {
        cout << "Invalid. Enter a number from 0 through 30: ";
        cin >> grammarPoints;
    }

    // Prompt user for spelling points.
    cout << "How many spelling points did the student earn? (0 - 20): ";
    cin >> spellingPoints;
    if (spellingPoints > 20.0 || spellingPoints < 0.0)
    {
        cout << "Invalid. Enter a number from 0 through 20: ";
        cin >> spellingPoints;
    }

    // Prompt user for length points.
    cout << "How many points for length did the student earn? (0 - 20): ";
    cin >> lengthPoints;
    if (lengthPoints > 20.0 || lengthPoints < 0.0)
    {
        cout << "Invalid. Enter a number from 0 through 20: ";
        cin >> lengthPoints;
    }

    // Prompt user for content points.
    cout << "How many points for content did the student earn? (0 - 30): ";
    cin >> contentPoints;
    if (contentPoints > 30.0 || contentPoints < 0.0)
    {
        cout << "Invalid. Enter a number from 0 through 30: ";
        cin >> contentPoints;
    }

    // Define an Essay object and initialize it with the values entered.
    Essay test;
    test.setGrammarPoints(grammarPoints);
    test.setSpellingPoints(spellingPoints);
    test.setLengthPoints(lengthPoints);
    test.setContentPoints(contentPoints);
    double totalScore = test.getScore();    // double totalScore = grammarPoints + spellingPoints + lengthPoints + contentPoints;
    test.setScore(totalScore);              // the setScore() uses getScore() to store overall score inputed by user

    // Display the test results.
    cout << setprecision(3);
    cout << "Grammar points: " << test.getGrammarPoints() << endl;
    cout << "Spelling points: " << test.getSpellingPoints() << endl;
    cout << "Length points: " << test.getLengthPoints() << endl;
    cout << "Content points: " << test.getContentPoints() << endl;
    cout << "Overall score: " << test.getScore() << endl;
    cout << "Grade: " << test.getLetterGrade() << endl;

    return 0;
}
