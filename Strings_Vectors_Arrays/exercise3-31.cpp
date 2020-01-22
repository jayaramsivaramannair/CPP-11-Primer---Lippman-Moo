/*
 * A Program to define an array of ten ints
 * Give each element the same value as its position in the array
 * An Array cannot be copied into another array
 */

#include <iostream>
#include <cstddef>


using std::cout;

int main()
{
    constexpr size_t array_size = 10;
    int ia[array_size];
    for (size_t ix = 0; ix < array_size; ++ix)
    {
        ia[ix] = ix;
    }
    

    cout << "Contents of the Array are: ";
    for (auto i : ia)
    {
        cout << i << " ";
    }

    return 0;
}