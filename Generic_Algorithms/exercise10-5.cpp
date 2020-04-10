/* 
In the call to equal on rosters (identified on page 380 of text), what would happen
if both rosters held C-style strings, rather than library strings?
*/

#include <iostream>
#include <algorithm>

using std::endl;
using std::cout;
using std::equal;

char roster2[] = {"dragonfruit"};
char roster1[] = {"dragon"};

int main()
{
    if (equal(std::begin(roster1), std::end(roster1), std::begin(roster2)))
    {
        cout << "The two strings are equal!" << endl;
    } else {
        cout << "The two strings are not equal!" << endl;
    }

    return 0;
}

/*

We can call equal algorithm to compare two c-style strings. Iterators to the c-style strings can
be passed to the function by using begin() and end() functions

*/
