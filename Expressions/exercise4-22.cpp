/*
 * Write a program using conditional operators to assign:
 * high pass if the grade is greater than 90
 * low pass if grade is between 60 and 75 (both inclusive)
 * fail if the grade is less than 60
 * pass if the grade is any other value
 */


#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
    int student1_grade = 58;
    int student2_grade = 65;
    int student3_grade = 81;
    int student4_grade = 96;

    string student1_finalgrade = (student1_grade > 90) ? "high pass"
                                                        : (student1_grade >= 60 && student1_grade <= 75) ? "low pass"
                                                                                                         : (student1_grade > 60) ? "pass" : "fail";

    string student2_finalgrade = (student2_grade > 90) ? "high pass"
                                                       : (student2_grade >= 60 && student2_grade <= 75) ? "low pass"
                                                                                                        : (student2_grade > 60) ? "pass" : "fail";

    string student3_finalgrade = (student3_grade > 90) ? "high pass"
                                                       : (student3_grade >= 60 && student3_grade <= 75) ? "low pass"
                                                                                                        : (student3_grade > 60) ? "pass" : "fail";

    string student4_finalgrade = (student4_grade > 90) ? "high pass"
                                                       : (student4_grade >= 60 && student4_grade <= 75) ? "low pass"
                                                                                                        : (student4_grade > 60) ? "pass" : "fail";

    cout << "Final Grade for Student 1 is " << student1_finalgrade << endl;
    cout << "Final Grade for Student 2 is " << student2_finalgrade << endl;
    cout << "Final Grade for Student 3 is " << student3_finalgrade << endl;
    cout << "Final Grade for Student 4 is " << student4_finalgrade << endl;


    return 0;
}