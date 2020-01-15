/*
* Using a decrement operator to write a for loop that prints numbers
* from ten down to zero.
*/

#include <iostream>

int main()
{
    for (int val = 10; val >= 0; val--)
        std::cout << val << std::endl;
    
    return 0;
}