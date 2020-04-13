/*
In addition to unique, the library defines function named unique_copy that takes a third
iterator denoting a destination into which to copy the unique elements. Write a program
that uses unique_copy to copy the unique elements from vector into an initially empty list
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <iterator>

using std::cout;
using std::endl;
using std::vector;
using std::list;

vector<int> ivec{10,10,10,9,9,8,8,8,8,7,6,5,4,4,3,3,3,3,2,2,1};
list<int>ilist;

int main()
{
    cout << "Printing vector elements: " << endl;
    for (auto elem: ivec)
    {
        cout << elem << " ";
    }
    cout << endl;
    unique_copy(ivec.begin(), ivec.end(), back_inserter(ilist));
    cout << "Printing list elements after applying unique_copy: " << endl;
    for (auto elem : ilist)
    {
        cout << elem << " ";
    }
    cout << endl;


    return 0;
}