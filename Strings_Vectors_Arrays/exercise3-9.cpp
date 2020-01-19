#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

int main()
{
    string s; // S initialized with an empty string.
    /*
     * Trying to using a subscript operator to access a string initialized with empty string
     * will produce a result which will be undefined
     */
    cout << s[0] << endl;
    return 0;
}