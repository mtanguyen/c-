//
//  File Name: GradedActivity.h
//  Course: COP3331 F 8-11am
//  Purpose: This header file contains the base class, GradedActivity.
//  Created by My Nguyen on 03/16/17.
//  Copyright © 2017 My Nguyen. All rights reserved.
//

#ifndef GRADEDACTIVITY_H
#define GRADEDACTIVITY_H

class GradedActivity        // Base class
{

    protected:
        // To hold the numeric score.
        double score;

    public:
        // Default constructor.
        GradedActivity()
        {
            score = 0.0;
        }

        // Constructor.
        GradedActivity(double s)
        {
            score = s;
        }

        // Mutator function.
        void setScore(double s)
        {
            score = s;
        }

        // Accessor function.
        virtual double getScore() const
        {
            return score;
        }

        virtual char getLetterGrade() const
        {
            // To hold the letter grade
            char letterGrade;

            if (score > 89)
                letterGrade = 'A';
            else if (score > 79)
                letterGrade = 'B';
            else if (score > 69)
                letterGrade = 'C';
            else if (score > 59)
                letterGrade = 'D';
            else
                letterGrade = 'F';

            return letterGrade;
        }

};
#endif
