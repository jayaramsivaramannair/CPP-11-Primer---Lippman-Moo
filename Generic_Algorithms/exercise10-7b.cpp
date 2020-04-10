/*
Determine if there are any errors in the following programs and, if so, correct
the error(s):

vector<int> vec;
vec.reserve(10);
fill_n(vec.begin(), 10, 0);

Problem:
(a) vector is uninitialized
(b) vector must also be large enough to hold as many values as provided in the count argument
of fill_n algorithm
*/

#include <iostream>
#include <algorithm>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

vector<int> vec(10,3);

int main()
{
    vec.reserve(10);
    cout << "Elements in the vector before change: ";
    for (auto elem: vec)
    {
        cout << elem << " ";
    }

    cout << endl;
    fill_n(vec.begin(), 10, 0);

    cout << "Elements in the vector after change: ";
    for (auto elem: vec)
    {
        cout << elem << " ";
    }
    
    cout << endl;
    return 0;
}