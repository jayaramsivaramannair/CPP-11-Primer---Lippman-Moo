/*
Write an expression to determine whether an int is even or odd.
*/


#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int i = 0;

    cout << "Enter a number greater than 0: ";
    cin >> i;

    if (i % 2) // evaluated only if a non-zero value returned
    {
        cout << i << " is odd\n";
    } else {
        cout << i << " is even\n";
    }

    return 0;
}