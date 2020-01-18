#include <iostream>

int main()
{
    int i = 42; // Declares a variable i of type int and assigns to it the value 42

    // p1 is a pointer to an int and it holds the address for i which is of type int as well
    int *p1 = &i;

    // *p1 is a deference operator which helps access the value of the object to which p1 points
    // The value of the object is accessed and re-assigned a new value
    // 42 multiplied by 42 becomes the new value of the object to which p1 points
    *p1 = *p1 * *p1;

    std::cout << i << std::endl; // Prints 1764


    return 0;
}