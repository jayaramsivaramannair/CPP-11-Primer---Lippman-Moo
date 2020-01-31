/*
Write a grading program to generate a letter grade from a numeric grade using conditional operators
instead of if-else statements
*/

#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    const vector<string> scores {"F", "D", "C", "B", "A", "A++" };
    int grade = 0; // represents the numerical grade
    string lettergrade; // represents the letter grade

    cout << "Enter a numerical grade between 0 and 100: ";
    cin >> grade;

    lettergrade = (grade < 60) ? lettergrade = scores[0] : lettergrade = scores[(grade - 50) / 10];

    cout << "The corresponding letter grade is " << lettergrade << endl;

    return 0;
}