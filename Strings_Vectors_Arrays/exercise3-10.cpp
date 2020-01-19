/*
* A Program that reads a string of characters including punctuations
* then writes what was read but without the punctuations
*/

#include <iostream>
#include <string>

using std::cout;
using std::string;
using std::cin;
using std::endl;

int main()
{
    string s;

    cout << "Enter a string: " << endl;
    getline(cin,s);

    for (auto &c : s)
    {
        if(!ispunct(c))
        {
            cout << c;
        }
    }
    cout << endl;
    return 0;
}