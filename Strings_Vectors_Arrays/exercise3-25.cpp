/*
 * Using iterators, we like to count how many grades fall into various clusters of 11
 * Each cluster representing 10 grades starting from 0-9, 10-19, 20-29 and so on
 * Final cluster being reserved for the perfect score of 100
 */


#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    unsigned number_of_grades = 0;

    /*
    *Containing 11 buckets representing scores from 0 to 100
    * First bucket representing the score 0 - 9
    * Second bucket representing the score 10 - 19
    * Third bucket representing the score 20 - 29 and so on
    * Last bucket representing the score 100
    */
    vector<unsigned> scores(11,0); // Vector containing 11 elements each initialized to the value zero
    unsigned grade = 0;

    cout << "How many grades you want to enter? " << endl;
    cin >> number_of_grades;

    cout << "Start entering grades......" << endl;

    while (number_of_grades > 0)
    {
        auto it = scores.begin(); // Initialize iterator with an element at the start of the vector
        cin >> grade;
        if (grade <= 100) // handle only valid grades
        {
            it += grade/10; // Using iterator arithmetic we moving the iterator to the relevant cluster
            (*it)++;
            number_of_grades--;
        }

    }

    for (auto it = scores.begin(); it != scores.end(); it++) // Print the count saved in the scores vector
    {
        cout << *it << " ";
    }

    cout << endl;
    return 0;
}