/*
 * Use different versions of the print function to print values of variable i and j show below:
 */

#include <iostream>
#include <iterator>

using std::endl;
using std::cout;
using std::begin;
using std::end;

// In case of the below function, if an array is passed,
// it is automatically converted to a pointer to point to the first element in the array
void print1(const int *a)
{
    cout << *a << endl;
}

// In case of the below function, begin and end functions are used on the array,
// to manage array bounds which becomes essential when passing array as an argument

void print2(const int *beg, const int *end)
{
    while (beg != end)
    {
        cout << *beg++ << " ";
    }
    cout << endl;
}

void print3(const int ia[], size_t size)
{
    for (size_t i = 0; i != size; ++i)
    {
        cout << ia[i] << " ";
    }
    cout << endl;
}

// This function severely limits the functionality as size is explicitly provided as part of the parameter
void print4(int (&arr) [2])
{
    for (auto elem : arr)
    {
        cout << elem << " ";
    }
    cout << endl;
}

int main()
{
    int i = 0, j[2] = {0,1};

    print1(&i);
    print1(j);

    cout << "Using begin and end functions to pass array as an argument, "
         <<"and print array elements" << endl;

    print2(begin(j), end(j));

    cout << "Passing size as an additional parameter alongwith array, "
         << "to manage array bounds." << endl;

    print3(j, 2);

    cout << "Passing a reference to an array as a parameter, "
         << "in which size is a part of the type to manage array bounds." << endl;

    print4(j);

    return 0;
}

/*
 * When passing array as a parameter to a function:
 * - Functions which take array parameters must ensure that all uses of the array stay within the array bounds.
 * - Thus, size must be supplied either as an additional parameter or as part of the type (in case of reference)
 */