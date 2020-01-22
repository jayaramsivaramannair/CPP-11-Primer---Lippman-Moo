/*
* A Program to define a vector of ten ints.
* Give each element in the vector the same value as its position in the vector
*/

#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

vector<int> ivec(10); // Each element initialized to the value 0


int main()
{
    //Using an iterator to initialize each element in the vector to the value of its position

    int i = 0;
    for (auto it = ivec.begin(); it != ivec.end(); it++)
    {
        *it = i;
        i++;
    }

    cout << "Contents of the vector ivec are: ";

    for (auto i : ivec)
    {
        cout << i << " ";
    }
    cout << endl;

    vector<int> ivec2 = ivec; // This copies the contents of vector 'ivec' into vector 'ivec2'

    cout << "Contents of the vector ivec2 are: ";

    for (auto i : ivec2)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
