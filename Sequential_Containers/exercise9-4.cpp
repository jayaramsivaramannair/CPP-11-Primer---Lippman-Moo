/*
Write a function that takes a pair of iterators to a vector<int> and an int value.
Look for that value in the range and return a bool indicating whether it was found.
*/

#include <iostream>
#include <vector>
#include <iterator>

using std::vector;
using std::iterator;
using std::cout;
using std::endl;

bool find_element(vector<int>::iterator b, vector<int>::iterator e, int i)
{
    while (b != e)
    {
        if ((*b) == i)
        {
            return true;
        }
        b++;
    }
    return false;
}

int main()
{
    vector<int> v{10,20,30,40,50,60,70};
    vector<int>::iterator iter1 = v.begin(), iter2 = v.end();

    if(find_element(iter1, iter2, 70))
    {
        cout << "Specified Value is in the range!" << endl;
    } else {
        cout << "Specified Value is NOT in the range!" << endl;
    }

    return 0;
}