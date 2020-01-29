/*
 * Write a program combining dereference and increment (both postfix and prefix) operators
 * in a single expression to access and prints the elements of a vector
 */

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> ivec{1,2,3,4,5,6,7,8,9};

    auto pbeg = ivec.begin();
    auto qbeg = ivec.begin();

    cout << "Using postfix increment and dereference operator: " << endl;
    // Using postfix increment and dereference operator to print each element in the vector
    while(pbeg != ivec.end() && *pbeg >= 0)
    {
        cout << *pbeg++ << " ";
    }

    cout << endl;

    cout << "Using prefix increment and dereference operator: " << endl;
    // Alternative version;
    // Using prefix increment and dereference operator to print each element in the vector

    while(qbeg != ivec.end() && *qbeg >= 0)
    {
        // Increment pbeg then dereference it. As a result, the first element will be missed
        cout << *++qbeg << " ";
    }
    return 0;
}