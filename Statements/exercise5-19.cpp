/*
 * Write a program which uses a do while loop to repetitively request two strings from the user
 * report which string is less than the other.
 */

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    string repeat;

    do {
        string string1, string2;

        cout << "Enter two strings: " << endl;
        cin >> string1 >> string2;

        if (string1 < string2)
        {
            cout << "String 1 is less than String 2" << endl;
        } else {
            cout << "String 2 is less than String 1" << endl;
        }

        cout << "Do you wish to continue (y or n)?: ";
        cin >> repeat;
    } while (repeat == "y");

    return 0;
}