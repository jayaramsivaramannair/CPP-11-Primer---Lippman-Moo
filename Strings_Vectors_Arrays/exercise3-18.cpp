/*
* Determine whether the following program is legal or not
* If not legal, fix it to make it legal
*/

#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int main()
{
    vector<int> ivec; // Empty Vector
    /*
    * In case of an empty vector, subscript operators cannot be used to add elements to the vector
    * Elements can be added by using the push_back method of vector
    */

    // ivec[0] = 42; // Not a legal operation

    ivec.push_back(55);

    for (auto i : ivec)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
