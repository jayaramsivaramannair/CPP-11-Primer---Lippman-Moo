/*
 * Explain the behavior of the following function and fix the problems if any so that the function can be
 * called correctly
 *
 * void print(const int ia[10])
 * {
 *  for (size_t i = 0; i != 10, ++i)
 *      cout << ia[i] << endl;
 *  }
 */

#include <iostream>

using std::endl;
using std::cout;

// Size must be supplied as an additional parameter instead of being supplied as part of the array argument
void print(const int *ia, size_t size)
{
    for (size_t i = 0; i != size; ++i)
    {
        cout << ia[i] << endl;
    }
}

int main()
{
    int ia[] = {1,2,3,4,5,6,7,8,9,10};

    print(ia, 10);

    return 0;
}