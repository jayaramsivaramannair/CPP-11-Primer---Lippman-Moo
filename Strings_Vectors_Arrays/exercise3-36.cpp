/*
* A Program to compare two arrays for equality.
* Write a similar program to compare two vectors.
*/

#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::cout;
using std::end;
using std::vector;
using std::endl;

int main()
{

    /*
    char arr1[] = "My name is Coder!";
    char arr2[] = "My name is Programmer!";

    char *p1 = arr1;
    char *p2 = arr2;

    cout << "Comparing two arrays for equality: ";

    while (p1 != end(arr1) || p2 != end(arr2))
    {
        if (*p1 != *p2)
        {
            cout << "Arrays are unequal!";
            return 0;
        }
        p1++;
        p2++;
    }

    cout << "Arrays are equal!" << endl;
     */


    vector<int> ivec1{1,2,3,4,5,6};
    vector<int> ivec2{1,2,3,4,5,6};

    if (ivec1 == ivec2)
    {
        cout << "Vectors are equal!";
    } else {
        cout << "Vectors are unequal!";
    }

    return 0;
}