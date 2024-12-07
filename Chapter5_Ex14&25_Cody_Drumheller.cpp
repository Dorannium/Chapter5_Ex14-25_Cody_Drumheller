/*
Title: Chapter 5 Exercise 14 and 25: Student Lineup
File Name: Chapter5_Ex14&25_Cody_Drumheller
Programmer: Cody Drumheller
Date:20241202
Requirements:
A teacher has asked all her students to line up according to their first name.
For example, in one class Amy will be at the front of the line, and Yolanda will be at the end.
Write a program that prompts the user to enter the number of students in the class, then loops to read that many names.
Once all the names have been read, it reports which student would be at the front of the line and
which one would be at the end of the line. You may assume that no two students have the same name.
Input Validation: Do not accept a number less than 1 or greater than 25 for the number of students.

Using Files—Student Line Up -Create a second branch for this project and modify your program to do the following:
Create a new branch in your Exercise 14 project that modifies the Student Line Up program described in Programming 
Challenge 14 so it reads the student names from the file LineUp.txt. 
The program should read names from the file until there is no more data to read.
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream inputFile("LineUp.txt");
    string name, firstInLine, lastInLine;

    if (!inputFile) {
        cerr << "Error: Could not open the file LineUp.txt.\n";
        return 1;
    }

    bool firstEntry = true;
    while (inputFile >> name) {

        if (firstEntry) {
            firstInLine = name;
            lastInLine = name;
            firstEntry = false;
        }
        else {
 
            if (name < firstInLine) {
                firstInLine = name;
            }
            if (name > lastInLine) {
                lastInLine = name;
            }
        }
    }

    inputFile.close();

    if (firstEntry) {
        cout << "No data found in the file.\n";
    }
    else {
 
        cout << "The student at the front of the line is: " << firstInLine << endl;
        cout << "The student at the end of the line is: " << lastInLine << endl;
    }

    return 0;
}








