/*
 * Given two vector of ints, write a program to determine whether one vector is a prefix of the other
 * For vectors of unequal length, compare the number of elements of the smaller vector
 * For instance, if one vector contains 0,1,1,2 and the other vector contains 0,1,1,2,3,5,8 then the program
 * should return true
 */

#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int main()
{
    vector<int>ivec1{8,7,6,5,4,6,7,8,9,10,11,12,13,14,15};
    vector<int>ivec2{8,7,6,5,4,6,7,8,9};

    int prefix = 1; // Value 1 indicates that one vector is a prefix of the other
    auto sz1 = ivec1.size();
    auto sz2 = ivec2.size();

    auto smallerVector = (sz1 < sz2) ? sz1 : sz2;

    for (decltype(sz1) index = 0; index != smallerVector; ++index) // Vectors of unequal length
    {
        if(ivec1[index] != ivec2[index])
        {
            prefix = 0;
        }
    }

    if(prefix)
    {
        cout << ((smallerVector == sz1) ? "Vector 1 is a prefix of Vector2"
                                       : "Vector 2 is a prefix of Vector1");
        cout << endl;
    } else {
        cout << "Neither vector is a prefix of the other" << endl;
    }
    return 0;
}