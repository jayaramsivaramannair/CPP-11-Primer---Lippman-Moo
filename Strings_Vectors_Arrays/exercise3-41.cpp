/*
* Write a program to initialize a vector from an an array of ints
*/

#include <iostream>
#include <vector>

using std::vector;
using std::begin;
using std::end;
using std::cout;
using std::endl;

int main()
{
    int arr[] = {41,42,43,44,45,46,47,48,49,50};

    vector<int>ivec(begin(arr), end(arr));

    cout << "Contents of the Vector are: ";

    for (auto i : ivec) // Using a range based for loop to prints contents of the vector
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}