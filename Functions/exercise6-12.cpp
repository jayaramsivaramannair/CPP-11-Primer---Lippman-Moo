/*
 * Using references, write a function to swap the values of two ints.
 * Test the function by calling it and printing the swapped values.
 */

#include <iostream>

using std::cout;
using std::endl;

void swap_ints(int &inta, int &intb)  // Parameters are references to ints
{
    int temp = inta;
    inta = intb;
    intb = temp;
}

int main()
{
    int a = 98, b = 89;

    cout << "Before Swap, the values of a and b are " << a << " and " << b << endl;
    swap_ints(a, b);
    cout << "After Swap, the values of a and b are " << a << " and " << b << endl;

    return 0;
}