/*
 * Write a function to determine whether a string contains any capital letters.
 * Also write a function to change a string to all lowercase. Do the parameters you use in these functions
 * have the same type? If so, why? If not, why not?
 */

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;

// Since the string does not need to be changed in the function,
// the parameter in contains_capital is defined a reference to const instead of a plain reference.
bool contains_capital(const string &s)
{
    for (decltype(s.size()) i = 0; i != s.size(); ++i)
    {
        if (isupper(s[i]))
        {
            return true;
        }
    }
    return false;
}

// Since characters in the string need to be changed to lowercase
//, the parameter in to_lowercase function is defined as a plain reference instead of a reference to const
void to_lowercase(string &s)
{
    for (auto it = s.begin(); it != s.end(); ++it)
    {
        *it = tolower(*it);
    }
}

int main()
{
    string s;

    cout << "Enter a string: ";
    cin >> s;

    if(contains_capital(s))
    {
        cout << s << " contains capital letters." << endl;
    } else {
        cout << s << " does not contain capital letters." << endl;
    }

    cout << s << " in lowercase is ";
    to_lowercase(s);
    cout << s << endl;

    return 0;
}