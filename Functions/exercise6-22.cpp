/*
 * Write a function to swap two int pointers
 */

#include <iostream>

using std::cout;
using std::endl;

// Two pointers to ints are supplied as parameters
void swap_ints(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main()
{
    int a = 100, b = 2;

    cout << "Before Swap, \n";
    cout << "The values of a and b are " << a << " and " << b << endl;

    swap_ints(&a, &b);

    cout << "After Swap, \n";
    cout << "The values of a and b are " << a << " and " << b << endl;


    return 0;
}