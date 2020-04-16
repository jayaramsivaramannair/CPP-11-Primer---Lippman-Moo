/*
Given a map<string, vector<int>>, write the types used as an argument and as the return value
for the version of insert that inserts one element.

*/

#include <map>
#include <iostream>
#include <string>
#include <vector>

using std::map;
using std::cout;
using std::endl;
using std::string;
using std::vector;

// Stores average student scores in last five exams
map<string, vector<int>> student_scores;

int main()
{
    student_scores.insert({"John", {85,86,94,75,73}});
    student_scores.insert({"Mark", {79,75,77,67,98}});
    student_scores.insert({"Joshua", {83,89,81,57,45}});
    student_scores.insert({"John", {78,97,98,99,57}}); // Insert does nothing as John already exists
    student_scores.insert({"Wendy", {92,93,94,95,97}});

    for (auto &score : student_scores)
    {
        cout << "Student: " << score.first << ", Scores: ";
        for (auto &s: score.second)
        {
            cout << s << " ";
        }
        cout << endl;
    }

    return 0;
}