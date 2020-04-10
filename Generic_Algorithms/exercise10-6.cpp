/*
Using fill_n write a program to set a sequence of int values to 0
*/

#include <iostream>
#include <algorithm>
#include <list>

using std::list;
using std::cout;
using std::endl;

list<int> ilist{11,12,13,14,15,16,17,18,19,20};

int main()
{
    cout << "Original elements in the sequence: ";
    for (auto elem: ilist)
    {
        cout << elem << " ";
    }
    cout << endl;

    fill_n(ilist.begin(), ilist.size(), 0);

    cout << "Elements in the sequence after change: ";
    for (auto elem: ilist)
    {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}