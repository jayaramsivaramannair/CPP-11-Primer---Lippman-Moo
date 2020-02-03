/*
 * Write a program which reads two integers from the standard input and
 * prints the result of dividing the first number by the second.
 * Throw an exception if the second number if zero.
 * Test your program with a zero input to see what happens if you do not catch an exception
 */

#include <iostream>
#include <stdexcept>

using std::cout;
using std::cin;
using std::endl;
using std::runtime_error;


int main()
{
    int int1, int2;

    cout << "Enter two integers: " << endl;
    cin >> int1 >> int2;

    if (int2 <= 0) // If the second number is zero
    {
        throw runtime_error("Division by Zero!");
    }

    cout << "The result of dividing " << int1 << " by " << int2 << " is "
         << int1 / int2 << endl;

    return 0;
}