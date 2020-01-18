#include <iostream>

int main()
{
    int i = 100, sum = 0; // Variables i and sum have block scope

    for (int i = 0; i != 10; ++i)
        sum += i; /* In this case, i refer to the variable defined in the body of for loop */

    // Value of i outputted is 100
    // sum will output 45
    std::cout << "i = " << i << "; "
              << "sum = " << sum << std::endl;
    return 0;
}