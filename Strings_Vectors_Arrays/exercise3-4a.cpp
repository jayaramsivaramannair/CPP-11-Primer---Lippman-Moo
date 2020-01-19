/*
*A program to read two strings and report whether the strings are equal.
*If not, report which of the two is larger.
*/

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    string s1, s2;

    cout << "Enter two strings: " << endl;
    getline(cin, s1);
    getline(cin, s2);

    if (s1 == s2)
    {
        cout << "Both strings are equal.\n";
    } else {
        if (s1 > s2)
        {
            cout << "First String is larger than the Second String.\n";
        } else {
            cout << "Second String is larger than the First String.\n";
        }
    }
    return 0;
}