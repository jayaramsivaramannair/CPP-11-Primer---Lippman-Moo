/*
* Using a while loop to change all characters in a string to X.
*/
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

int main()
{
    string s = "Coder!";
    decltype(s.size()) i = 0;

    while (i < s.size())
    {
        s[i] = 'X';
        i++;
    }

    cout << s << endl;

    return 0;
}
