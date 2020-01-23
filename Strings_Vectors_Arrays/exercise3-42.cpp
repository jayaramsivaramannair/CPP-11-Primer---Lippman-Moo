/*
* Write a program to copy a vector of ints into an array of ints
*/

#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int main()
{
    vector<int> ivec{41,42,43,44,45,46,47,48,49,50};
    int arr[ivec.size()]; // Create an empty of the same size as the vector
    int j = 0; // Index to access the array
    int *p = arr; // Points to the first element in the array

    // There is no way to initialize an array from a vector
    // so we have to individually copy each vector element into the array;

    for (auto i : ivec)
    {
        arr[j] = i;
        j++;
    }
    j = 0; // Re-initialize the variable to 0 for use in traversal of the array

    cout << "Contents of the array are: ";
    while (j < ivec.size())
    {
        cout << arr[j] << " ";
        j++;
    }
    cout << endl;


    return 0;
}
