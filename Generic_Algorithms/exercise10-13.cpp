/*
The library defines an algorithm named partition that takes a predicate and partitions
the container so that values for which the predicate is true appears in the first part
and those for which the predicate is false appears in the second part. 
The algorithm returns an iterator just past the element for which the predicate returned
true. Write a function that takes a string and returns a bool indicating whether the
string has five characters or more. Use that function to partition words. Print the 
elements that have five or more characters.
*/

#include <iostream>
#include <algorithm>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;


bool five_char(const string s)
{
    int i = 0;
    for(auto elem: s)
    {
        i++;
    }
    return (true ? (i >= 5) : false);
}

vector<string> svec{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};


int main()
{
    auto five_end = partition(svec.begin(), svec.end(), five_char);

    cout << "Elements with 5 Charaters or more are: ";

    for(auto iter = svec.begin(); iter != five_end; iter++)
    {
        cout << *iter << " ";
    }

    cout << endl;
    return 0;
}