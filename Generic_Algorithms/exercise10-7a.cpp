/*
Determine if there are any errors in the following programs and if so, correct the error(s):

vector<int> vec;
list<int> lst;
int i;

while(cin >> i)
    lst.push_back(i);
//copies elements from the list to the vector
copy(lst.cbegin(), lst.cend(), vec.begin())

Problem:

Problem with the above code is that vector is empty.
Vector's size should be big enough to hold elements from the container being copied

*/

#include <iostream>
#include <algorithm>
#include <list>
#include <vector>

using std::list;
using std::vector;
using std::cout;
using std::endl;
using std::cin;

vector<int> vec(10,0);
list<int> lst;
int i;


int main()
{
    cout << "Start entering numbers (Enter 0 when done): " << endl;
    while(cin >> i)
    {
        if (i == 00)
        {
            break;
        }
        lst.push_back(i);
    }
        
    copy(lst.cbegin(), lst.cend(), vec.begin());

    for (auto elem: vec)
    {
        cout << elem << " ";
    }
    cout << endl;
    return 0;
}