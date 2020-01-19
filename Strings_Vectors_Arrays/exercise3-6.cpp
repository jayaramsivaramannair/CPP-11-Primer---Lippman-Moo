/*
* Using a range for loop to change all characters in a string to X.
*/
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

int main()
{
    string s = "Programmer!";

    for (auto &c : s)
    {
        c = 'X';
    }

    cout << s << endl;

    return 0;
}
