/* 
Write a function that takes a pair of iterators to a vector<int> and an int value.
Look for that value in the range and return an iterator to the requested element.
*/

#include <iostream>
#include <vector>
#include <iterator>

using std::vector;
using std::iterator;
using std::cout;
using std::endl;

vector<int>::iterator find_element(vector<int>::iterator b, vector<int>::iterator e, int i)
{
    while (b != e)
    {
        if ((*b) == i)
        {
            return b;
        }
        b++;
    }
    return e;
}

int main()
{
    vector<int> v{10,20,30,40,50,60,70};
    vector<int>::iterator iter1 = v.begin(), iter2 = v.end();
    vector<int>::iterator found = find_element(iter1, iter2, 40);

    if (found != iter2) // If the requested element is found
    {
       cout << "The requested element " << *found << " is found!" << endl;
    } else {
        cout << "The requested element is not found!" << endl;
    }

    return 0;
}