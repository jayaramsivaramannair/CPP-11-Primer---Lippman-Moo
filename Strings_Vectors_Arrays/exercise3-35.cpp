/*
* Using pointers, write a program to set the elements in an array to zero
*/

#include <iostream>
#include <iterator>

using std::cout;
using std::endl;
using std::end;
using std::begin;

int main()
{

    int arr[9] = {1,2,3,4,5,6,7,8,9};
    int *p = arr;
    cout << "Current Elements in the array are: " << endl;
    while (p != end(arr))
    {
        cout << *p << " ";
        p++;
    }
    cout << endl;

    p = begin(arr);
    while (p != end(arr))
    {
        *p = 0;
        p++;
    }

    cout << "Elements in the array after they have been changed: " << endl;

    p = begin(arr);
    while (p != end(arr))
    {
        cout << *p << " ";
        p++;
    }
    cout << endl;

    return 0;
}