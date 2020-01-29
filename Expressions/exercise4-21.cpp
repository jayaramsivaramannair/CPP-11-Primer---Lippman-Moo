/*
 * Write a program which uses a conditional operator to find
 * elements in a vector<int> that have odd value and double the value
 * of each such element
 */


#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int main()
{
    vector<int>ivec{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    auto pbeg = ivec.begin();

    cout << "Before Doubling: " << endl;

    for (auto i : ivec)
    {
        cout << i << " ";
    }
    cout << endl;

    while (pbeg != ivec.end())
    {
        *pbeg = (*pbeg % 2) ? (*pbeg * 2) : *pbeg; // If the element is odd then double it;
        pbeg++;
    }

    // Using a range-based for loop to access and print vector elements after they have been changed
    cout << "After Doubling: " << endl;
    for (auto i : ivec)
    {
        cout << i << " ";
    }
    cout << endl;


    return 0;
}