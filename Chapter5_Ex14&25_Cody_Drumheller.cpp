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
#include <string>
using namespace std;

int main() {
    int numStudents;
    string name, firstInLine, lastInLine;

    do {
        cout << "Enter the number of students in the class (1 to 25): ";
        cin >> numStudents;
        if (numStudents < 1 || numStudents > 25) {
            cout << "Error: The number of students must be between 1 and 25.\n";
        }
    } while (numStudents < 1 || numStudents > 25);

    cout << "Enter the names of the students:\n";
    for (int i = 1; i <= numStudents; ++i) {
        cout << "Student " << i << ": ";
        cin >> name;

        if (i == 1) {
            firstInLine = name;
            lastInLine = name;
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

    cout << "\nThe student at the front of the line is: " << firstInLine << endl;
    cout << "The student at the end of the line is: " << lastInLine << endl;

    return 0;
}







