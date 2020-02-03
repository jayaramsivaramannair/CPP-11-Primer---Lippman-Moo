/*
 * Write a program which reads two integers from the standard input and
 * prints the result of dividing the first number by the second.
 */

#include <iostream>

using std::cout;
using std::cin;
using std::endl;


int main()
{
    int int1, int2;

    cout << "Enter two integers: " << endl;
    cin >> int1 >> int2;

    cout << "The result of dividing " << int1 << " by " << int2 << " is "
         << int1 / int2 << endl;

    return 0;
}