/*
 * Write a function that returns 0 when it is first called and then
 * generates numbers in sequence each time it is called again
 */

#include <iostream>

using std::cout;
using std::endl;

size_t generate_numbers()
{
    static size_t number = 0; // Since static, the value will be saved across calls.
    return number++;
}

int main()
{
    for (size_t i = 0; i != 25; ++i)
        cout << generate_numbers() << endl;

    return 0;
}