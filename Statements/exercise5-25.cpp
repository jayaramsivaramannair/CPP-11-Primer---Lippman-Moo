/*
 * Write a program which reads two integers from the standard input and
 * prints the result of dividing the first number by the second.
 * Use a try block to catch the exception if the second input is zero
 * The catch clause should print a message to the user and ask them to supply
 * a new number and repeat the code inside the try
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

    try {
        if (int2 <= 0)
        {
            throw runtime_error("Division by Zero!");
        }
    } catch (runtime_error err) {
        while (int2 <= 0) // Keep prompting the user for a number greater than 0
        {
            cout << err.what()
                 << "\nPlease enter Integer # 2 again, "
                 << "\nEnsure that the number is greater than zero: " << endl;
            cin >> int2;
        }
    }

    cout << "The result of dividing " << int1 << " by " << int2 << " is "
         << int1 / int2 << endl;

    return 0;
}