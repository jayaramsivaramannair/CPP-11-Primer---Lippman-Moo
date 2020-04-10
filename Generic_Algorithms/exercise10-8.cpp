/*
We said that algorithms do not change the size of the containers over which they operate. 
Why doesn't the use of back_inserter invalidate this claim.

Reason:
- back_inserter uses push_back method to add elements to a container.
- push_back is ideal for adding elements to an unintialized container such as vector or list
*/

#include <iterator>
#include <algorithm>
#include <iostream>
#include <list>

using std::list;
using std::cout;
using std::endl;

list<int> ilist;

int main()
{
    fill_n(back_inserter(ilist), 10, 75);

    cout << "Elements in the list are: ";

    for (auto elem: ilist)
    {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}