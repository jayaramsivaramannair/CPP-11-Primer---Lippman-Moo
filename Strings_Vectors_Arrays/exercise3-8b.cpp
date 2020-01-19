/*
* Using a traditional for loop to change all characters in a string to X.
*/
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

int main()
{
    string s = "Computer Scientist!";
    

    for (decltype(s.size()) i = 0;i < s.size(); i++)
    {
        s[i] = 'X';
    }

    cout << s << endl;

    return 0;
}

/*
* Among traditional for loops, range based for loops and while loops, 
* I prefer range based for loops since there is no need to worry about 
* incrementing loop variable or providing the condition to break out of the loop
*/
