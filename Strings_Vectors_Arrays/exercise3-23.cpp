/*
* A Program to create a vector with 10 int elements
* Using an iterator, assign each element a value that is twice its current value.
* Print the vector to test if the operation was successful
*/

#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int main()
{
    vector<int> ivec; // Creates an empty vector with 10 elements initialized to zero

    // Using a regular for loop to add 10 elements to the vector 'ivec'
    for (decltype(ivec.size()) index = 1; index <= 10; index++)
    {
        ivec.push_back(index);
    }

    cout << "Values in the vector before doubling: " << endl;
    for (auto it = ivec.begin(); it != ivec.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // Using an iterator to double the value of each element in the vector
    for (auto it = ivec.begin(); it != ivec.end(); it++)
    {
        *it = (*it) * 2;
    }

    cout << "Values in the vector after doubling: " << endl;
    for (auto it = ivec.begin(); it != ivec.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    
    return 0;
}