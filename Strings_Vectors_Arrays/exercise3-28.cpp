/*
* Explanation for values contained in the following arrays
*/

/*
* Uninitialized objects of built-in type defined inside a function will be undefined
* Thus, ints defined outside a function will be initialized to zero and ints
* defined inside a function will be undefined
*/

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

string sa[10]; // Each element in this array of 10 strings will be initialized to an empty string
int ia[10]; // Each element in this array of 10 ints will be initialized to zero

int main()
{
    string sa2[10]; // Each element in this array will be initialized to an empty string
    int ia2[10]; // Each element in this array will be undefined as defined inside a function

    cout << "Contents of the Array 'sa' are as below: " << endl;
    for (auto str : sa)
    {
        cout << "Empty String: " << str << endl;
    }

    cout << "Contents of the Array 'sa2' are as below: " << endl;
    for (auto str : sa2)
    {
        cout << "Empty String: " << str << endl;
    }

    cout << "Contents of the Array 'ia' are: ";
    for (auto i : ia)
    {
        cout << i << " ";
    }
    cout << endl;

    // Output will be non-sensical as elements are undefined
    cout << "Contents of the Array 'ia2' are: ";
    for (auto i : ia2)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}