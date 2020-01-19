/*
* A program to read input a line at a time
* Modify the program to read a word at a time
*/

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    string s;
    
    int number_of_words = 5;
    int number_of_lines = 5;
    
    
    // The code below will read a word at a time
    while (number_of_words > 0)
    {
        cin >> s;
        cout << s << endl;
        number_of_words--;
    }
    
    
    // The code below will read a line at a time
    while (number_of_lines > 0)
    {
        getline(cin, s);
        cout << s << endl;
        number_of_lines--;
    }
    
    return 0;
}