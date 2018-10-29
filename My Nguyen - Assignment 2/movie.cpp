//
//  File Name: movie.cpp
//  Course: COP3331 F 8-11am
//  Purpose: This program allows the user to enter movie information, which is then stored in a vector.
//  Created by My Nguyen on 1/28/17.
//  Copyright © 2017 My Nguyen. All rights reserved.
//

#include <iostream>
#include <vector>           // Needed for pushback
#include <string>           // Needed for getline
using namespace std;

// Create a structure called Movie
struct Movie
{
    string Title;           // Movie's name
    string Director;        // Director's name
    int Year;               // Year released
    int Time;               // Running time in minutes
};

vector <Movie> movieList;       // Global vector called movieList that stores movies data


// Function that obtain movie data
void obtainData (Movie movieData)
{
    char moreInfo = 'y';                        // To let user enter first movie data

    while (moreInfo == 'y' || moreInfo == 'Y')
    {
        // Get the movie's title
        cout << "\nEnter the title of the movie: ";
        cin.ignore();                               // To skip the remaing '\n' character
        getline(cin, movieData.Title);              // Getline used to get the Title's name

        // Get the movie's director's name
        cout << "Enter the director's name: ";
        cin.ignore();                              // To skip the remaing '\n' character
        getline(cin, movieData.Director);          // Getline used to get the Director's name

        // Get the year the movie was created
        cout << "Enter the year the movie was created: ";
        cin >> movieData.Year;

        // Get the movie's running time
        cout << "Enter the movie length (in minutes): ";
        cin >> movieData.Time;

        movieList.push_back(movieData);         // Put information into vector

        // Ask user to enter more more info or not
        cout << "\nDo you have more movie info to enter? \n";
        cout << "Enter y/Y for yes or n/N for no: ";
        cin >> moreInfo;
    }
}

// Function that outputs the data that takes in vector and integer
void outputData(vector <Movie> movieList, int size)
{
    // Display the movies' data
    cout << endl << "Here is the info that you entered: \n";

    for(int i = 0; i < size; i++)
    {
        cout << "Movie Title: " << movieList[i].Title << endl;
        cout << "Movie Director: " << movieList[i].Director << endl;
        cout << "Movie Year: " << movieList[i].Year << endl;
        cout << "Movie Length: " << movieList[i].Time << " minutes \n" << endl;
    }
}

int main()
{
    Movie movieData;                            // Struct Movie
    obtainData(movieData);                      // Get movie data
    outputData(movieList, movieList.size());    // Output movie data

}
