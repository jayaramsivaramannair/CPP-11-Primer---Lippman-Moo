/*
* Write the condition for a while loop that would read ints from the standard input
* and stop when the value read is equal to 42
*/


#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int i = 0;

    cout << "Enter an integer: ";
    cin >> i;

    while (i != 42) // Evaluates to true unless the value of i is 42
    {
       cout << "i is " << i << endl;
       cout << "Enter an integer: ";
       cin >> i;
    }

    cout << "Program ends; as the value entered is 42\n";

    return 0;
}