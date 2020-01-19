/*
* A program to report if two strings have the same length
* and if not report, which string is longer.
*/

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;
using std::cin;

int main()
{
    string s1, s2;

    cout << "Enter two strings: " << endl;

    getline(cin, s1);
    getline(cin, s2);

    if (s1.size() == s2.size())
    {
        cout << "Both strings are of the same length.\n";
    } else {
        if (s1.size() > s2.size())
        {
            cout << "First string is longer.\n";
        } else
        {
            cout << "Second string is longer.\n";
        }
    }
    return 0;
}