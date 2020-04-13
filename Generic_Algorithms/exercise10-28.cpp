/*
Copy a vector that holds the values from 1 to 9 inclusive, into three other containers.
Use an inserter, a back_inserter, and a front_inserter respectively to add elements
to these containers. Predict how the output sequence varies by the kind of inserter
and verify your predictions by running your programs. 
*/

#include <iostream>
#include <algorithm>
#include <iterator>
#include <list>
#include <vector>
#include <deque>

using std::vector;
using std::list;
using std::deque;
using std::cout;
using std::endl;

vector<int> ivec1{1,2,3,4,5,6,7,8,9};
list<int> ilist;
deque<int>ideque;
vector<int>ivec2;

int main()
{
    //Stores elements in ivec2 in the same order as ivec1
    copy(ivec1.begin(),ivec1.end(), back_inserter(ivec2));

    //Stores elements in ideque in reverse order as items added first get pushed behind
    copy(ivec1.begin(), ivec1.end(), front_inserter(ideque));
    copy(ivec1.begin(), ivec1.end(), inserter(ilist,ilist.begin()));
    
    //Stores element in vector in the same order as ivec1
    cout << "Printing 1st Copy from a vector: " << endl;
    for(auto elem : ivec2)
    {
        cout << elem << " ";
    }
    cout << endl;
    cout << "Printing 2nd Copy from a deque: " << endl;
    for (auto elem : ideque)
    {
        cout << elem << " ";
    }
    cout << endl;
    cout << "Printing 3rd Copy from a list: " << endl;
     for(auto elem : ilist)
    {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}