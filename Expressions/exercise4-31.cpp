/*
 * Write a program to fill in element values in a vector using a for loop
 * Write one version of the program using prefix increment/decrement operators
 * Also, write another version of the program using postfix increment/decrement operators
 */

#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int main()
{
    vector<int> ivec1(10, 0);
    vector<int> ivec2(10, 0);

    vector<int>::size_type cnt1 = ivec1.size();
    vector<int>::size_type cnt2 = ivec1.size();


    // Using prefix increment operators
    for (vector<int>::size_type ix = 0;
         ix != ivec1.size(); ++ix, --cnt1)
    {
        ivec1[ix] = cnt1;
    }
    cout << "Using prefix increment operators, vector 1 has following values:" << endl;
    for (auto i : ivec1)
    {
        cout << i << " ";
    }
    cout << endl;

    // Using postfix increment operators
    for (vector<int>::size_type ix = 0;
         ix != ivec2.size();)
    {
        ivec2[ix++] = cnt2--;
    }

    cout << "Using postfix increment operators, vector 2 has following values:" << endl;
    for (auto i : ivec2)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

/*
 * Prefix operators must be always be preferred over postfix operators since postfix operators
 * make a copy of the original value before incrementing it thus involving some extra work
 */