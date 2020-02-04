/*
 * Write a function called reset to reset a variable to zero.
 * The function takes a reference to the variable as an argument.
 */

#include <iostream>

using std::cout;
using std::endl;

void reset(int &a) // Parameter is a reference to an int.
{
    a = 0;
}

int main()
{
    int b = 98;

    cout << "The value of b before reset is " << b << endl;
    reset(b);
    cout << "The value of b after reset is " << b << endl;

    return 0;
}