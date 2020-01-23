/*
* Write a program to compare two strings
* Alternatively, also write a program to compare the values of two c-style strings
*/

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

int main()
{
    string string1 = "Coding is fantastic!";
    string string2 = "Coding is wizardry!";

    cout << "String Comparison" << endl;
    if (string1 == string2)
    {
        cout << "Both strings are equal!" << endl;
    } else {
        cout << "Both strings are unequal!" << endl;
    }
    cout << endl;

    char ca1[] = "Coding is fantastic!\0";
    char ca2[] = "Coding is fantastic!\0";

    cout << "C-Style String Comparison" << endl;
    if (strcmp(ca1,ca2) == 0)
    {
        cout << "Both C-Style Character Strings are equal!" << endl;
    } else {
        cout << "Both C-Style Character Strings are unequal!" << endl;
    }

    return 0;
}