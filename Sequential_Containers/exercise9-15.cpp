/*
Write a program to determine whether two vector<int>s are equal
*/

#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int main()
{
    vector<int> v1{21,22,23,24,25,26,27,28};
    vector<int> v2{21,22,23};

    if (v1 == v2)
    {
        std::cout << "Two vectors are EQUAL!" << std::endl;
    } else {
        std::cout << "Two vectors are UNEQUAL!" << std::endl;
    }

    return 0;
}