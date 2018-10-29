//
//  File Name: empDriver.cpp
//  Course: COP3331 F 8-11am
//  Purpose: This program allows the user to enter monthly salary and name of employee and it generates the raise of each employee by 10% on a yealy income.
//  Created by My Nguyen on 1/28/17.
//  Copyright © 2017 My Nguyen. All rights reserved.
//

#include <iostream>
#include <string>
#include "Employee.h"
using namespace std;

// Function newEmployee takes in an Employee object and asks for employee's name and and salary
void newEmployee(Employee &employee)                    // The reference acts as an alias to employee
{
    string name;
    int salary;

    cout << "Enter an employee name: ";
    getline(cin, name);
    employee.setName(name);                             // Set user's inputed name into the member variable name in Employee class

    cout << "Enter the employee's monthly salary: ";
    cin >> salary;
    employee.setSalary(salary);                         // Set user's inputed salary into the member variable salary in Employee class
}

// Function updatedSalary calculates a 10% raise for each employee
void updatedSalary(Employee &employee)
{
    employee.setSalary(employee.getSalary() * 1.10);
}


int main()

{
    Employee employee1("My Nguyen", 4000);     // This is the hardcoded employee
    Employee employee2;                        // Employee object created using the default constructor

    newEmployee(employee2);                    // Obtain the information from user and put the values into employee2

    // Display the name and salary stored in the two employee objects
    cout << "\nHere are the employees and their yearly salaries\n";
    cout << employee1.getName() << ": $" << employee1.getSalary() * 12 << endl;
    cout << employee2.getName() << ": $" << employee2.getSalary() * 12<< endl;

    // Calculates 10% raise
    updatedSalary (employee1);
    updatedSalary (employee2);

    // Display the name and 10% raised in the yearly salary stored in the two employee objects
    cout << "\nHere are the employees and their yearly salaries with a 10% raise\n";
    cout << employee1.getName() << ": $" << employee1.getSalary() * 12 << endl;
    cout << employee2.getName() << ": $" << employee2.getSalary() * 12 << endl;

}
