/*
Write a lambda that captures a local int variable and decrements that variable until it
reaches 0. Once the variable is 0 additional calls should no longer decrement the variable.
The lamda should return a bool that indicates whether the captured variable is 0
*/

#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int a = 15;
    //int variable captured by reference
    auto is_zero = [&a] () -> bool {
        if (a > 0) {--a; return false;} else return true;};

    while (a != 0)
    {
        is_zero();
        cout << "Captured Variable is " << a << " and it is greater than zero." << endl;
    }

    if (is_zero())
    {
        cout << "Captured Variable is now " << a << endl;
    }
    
    return 0;
}