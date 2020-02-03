/*
 * Write a function to return the absolute value of its argument
 */

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int abs_value(int value)
{
    if (value < 0)
    {
        return -1 * value;
    } else {
        return value;
    }
}

int main()
{
    int val;

    cout << "Enter a number to obtain its absolute value: ";
    cin >> val;

    cout << "The absolute value of " << val << " is " << abs_value(val) << endl;
    return 0;
}