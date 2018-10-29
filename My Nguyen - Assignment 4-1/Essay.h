//
//  File Name: Essay.h
//  Course: COP3331 F 8-11am
//  Purpose: This header file contains the derived class, Essay.
//  Created by My Nguyen on 03/16/17.
//  Copyright © 2017 My Nguyen. All rights reserved.
//

#ifndef ESSAY_H
#define ESSAY_H
#include "GradedActivity.h"

class Essay : public GradedActivity         // Derived class
{

    private:
        // All members are of type double.
        double grammarPoints;
        double spellingPoints;
        double lengthPoints;
        double contentPoints;

    public:
        // Default constructor.
        Essay()
        {
            grammarPoints = 0.0;
            spellingPoints = 0,0;
            lengthPoints = 0.0;
            contentPoints = 0.0;
        }

        // Mutator functions.
        void setGrammarPoints(double points)
        {
            if (points <= 30.0 && points >= 0.0)
            {
                 grammarPoints = points;
            }
        }

        void setSpellingPoints(double points)
        {
            if (points <= 20.0 && points >= 0.0)
            {
                spellingPoints = points;
            }
        }

        void setLengthPoints(double points)
        {
            if (points <= 20.0 && points >= 0.0)
            {
                lengthPoints = points;
            }
        }

        void setContentPoints(double points)
        {
            if (points <= 30.0 && points >= 0.0)
            {
                contentPoints = points;
            }
        }

        // Accessor functions.
        double getGrammarPoints() const
        {
            return grammarPoints;
        }

        double getSpellingPoints() const
        {
            return spellingPoints;
        }

        double getLengthPoints() const
        {
            return lengthPoints;
        }

        double getContentPoints() const
        {
            return contentPoints;
        }

        // Refined getScore is a member function made virtual for any situations where a function is redefined.
        virtual double getScore() const
        {
            // Get total score
            double totalScore = grammarPoints + spellingPoints + lengthPoints + contentPoints;
            return totalScore;
        }

        // Redefined getLetterGrade is a member function made virtual for any situations where a function is redefined.
        virtual char getLetterGrade() const
        {
            // Use getScore to pass through getLetterGrade
            this->getScore();
            return GradedActivity::getLetterGrade();

        }

};
#endif

/*
Essay(double grammar, double spelling, double length, double content)
{
    set(grammar, spelling, length, content);
}

void set(double grammar, double spelling, double length, double content)
{
    double totalScore;  // To hold the total score

    // Set the number of grammar, spelling, length, and content points earned.
    grammarPoints = grammar;
    spellingPoints = spelling;
    lengthPoints = length;
    contentPoints = content;

    // Calculate the total points from the four categories
    totalScore = grammarPoints + spellingPoints + lengthPoints + contentPoints;

    // Call the inherited setScore function to set the total score.
    GradedActivity::setScore(totalScore);
}

char letterGrade; // To hold the letter grade

// Use redefined getScore to obtain redefined getLetterGrade
if (GradedActivity::getScore() > 89)
    letterGrade = 'A';
else if (GradedActivity::getScore() > 79)
    letterGrade = 'B';
else if (GradedActivity::getScore() > 69)
    letterGrade = 'C';
else if (GradedActivity::getScore() > 59)
    letterGrade = 'D';
else
    letterGrade = 'F';

return letterGrade;
*/
