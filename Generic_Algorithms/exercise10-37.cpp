/*
Given a vector that has ten elements, copy the elements from positions 3 through 7 in reverse order
to a list
*/

#include <iostream>
#include <iterator>
#include <vector>
#include <list>

using std::vector;
using std::list;
using std::cout;
using std::endl;

vector<int> ivec{11,12,13,14,15,16,17,18,19,20}; // Elements from position 3 to 7 are : 14,15,16,17,18
list<int> ilist;
vector<int>::reverse_iterator riter = ivec.rbegin();

int main()
{
    copy(riter + 2, riter + 7, back_inserter(ilist));
    cout << "Printing List Elements copied from position 3 through 7 from ivec in reverse order: " << endl;
    for (auto elem : ilist)
    {

        cout << elem << " ";
    }
    cout << endl;
    return 0;
}