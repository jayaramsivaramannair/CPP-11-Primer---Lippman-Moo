/*
A Program to read strings from the standard input
and then concatenating them into one large string.
*/

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;
using std::cin;

int main()
{
    string s1, train;
    int number_of_strings = 5;
    cout << "Enter strings: " << endl;
    
    while(number_of_strings > 0)
    {
        getline(cin, s1);
        train += s1;
        number_of_strings--;
    }
    
    cout << "Concatenated String is: \n" 
         << train;
    
    return 0;
}