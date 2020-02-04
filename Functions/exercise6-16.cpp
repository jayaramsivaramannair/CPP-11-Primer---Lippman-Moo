/*
 * The following function, although legal, is less useful than it might be.
 * Identify and correct the limitation on this function.
 */

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;


bool is_empty(string &s)
{
    return s.empty();
}

int main()
{
    string str = "";

    if(!is_empty(str))
    {
        cout << "The string is not empty." << endl;
    } else {
        cout << "The string is empty." << endl;
    }

    return 0;
}

/*
 * Reason for preferring reference to const over plain reference
 * If we the parameter is defined as a plain reference instead of a reference to const,
 * we cannot pass a const object or a literal or an object which requires conversion to a plain reference parameter.
 */