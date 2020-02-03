/*
 * Write a function which interacts with the user, asking for a number and generating the factorial
 * of that number. Call this function from main.
 */

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

long fact(int val)
{
    long result = 1;

    while (val > 1)
    {
        result *= val--;
    }
    return result;
}

int main()
{
    int value;

    cout << "Enter a number to generate its factorial: ";
    cin >> value;

    cout << "The factorial of " << value << " is " << fact(value) << endl;
    return 0;
}