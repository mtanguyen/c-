//
//  File Name: Employee.h
//  Course: COP3331 F 8-11am
//  Purpose: The Employee.h file will hold the class and member function definition.
//  Created by My Nguyen on 1/28/17.
//  Copyright © 2017 My Nguyen. All rights reserved.
//

#include <string>       // Enable this program to use C++ string data type
using namespace std;

class Employee
{

    private:
        string name;
        int salary;

    public:
        // Default constructor that initializes the name to “ ” (space) and salary to 0
        Employee()
        {
            name = "";
            salary = 0;
        }

        // Second constructor that takes two parameters with name and salary variables
        Employee(string employeeName, int employeeSalary)
        {
            name = employeeName;
            salary = employeeSalary;
        }

        // Mutator function for name and salary
        void setName(string employeeName)
        {
            name = employeeName;
        }

        void setSalary(int employeeSalary)
        {
            salary = employeeSalary;
        }

        // Accessor function for name and salary
        string getName() const
        {
            return name;
        }

        int getSalary() const
        {
            return salary;
        }

}; // End class Employee
