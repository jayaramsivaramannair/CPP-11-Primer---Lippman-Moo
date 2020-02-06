/*
 * Write a declaration for a function that returns a reference to an array of ten strings, without
 * using either a trailing return, decltype or a type alias.
 */

#include <iostream>
#include <string>
#define SIZE 10

using std::string;
using std::cout;
using std::endl;

string sarray[SIZE] = {};
string (&func(string s)) [SIZE] // This function returns a reference to an array of SIZE strings
{
    for (auto i = 0; i != SIZE; ++i)
    {
        sarray[i] = s;
    }
    return sarray;
}

int main()
{
    string welcome = "hi!";

    string (&rarray)[SIZE] = func(welcome);

    for (auto elem : rarray)
    {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}