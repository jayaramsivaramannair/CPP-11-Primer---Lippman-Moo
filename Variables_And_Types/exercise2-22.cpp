#include <iostream>

int main()
{
    int i = 0;
    int *p = &i;

    // Evaluates to true as it holds the address for variable i and thus a non-zero value
    // Thus the statement within if will be executed
    if (p)
        std::cout << "Pointer holds the address for variable i which is a non-zero value" << std:: endl;

    // Evaluates to false as dereference operator accesses the value 0 which is assigned to variable i
    // Thus the statement within if will not be executed
    // If i was assigned a non-zero value then evaluation will be true
    if (*p)
        std::cout << "Variable i is 0 thus using dereference operator will make if evaluate to false" << std:: endl;


    return 0;
}