/*
 * Using the declaration below: Revise it to return reference to an array instead of a pointer
 * int odd[] = {1,3,5,7,9};
 * int even[] = {0,2,4,6,8};
 * decltype(odd) *arrPtr(int i)
 * {
 *      return (i % 2) ? &odd : &even; // Returns a pointer to the array
 * }
 */


#include <iostream>

using std::cout;
using std::endl;

int odd[] = {1,3,5,7,9};
int even[]  {0,2,4,6,8};

decltype(odd) &arrPtr(int i)
{
    return (i % 2) ? odd : even; //returns a reference to the array
}

int main()
{
    int (&arref)[5] = arrPtr(9);

    for (auto elem : arref)
    {
        cout << elem << " ";
    }

    cout << endl;

}