#include <iostream>

int main()
{
    int i = 0;

    //Illegal as dp points to an object of type double
    //however, dp is assigned the address of an object which is of type int.
    // Incompatibility between pointer type and the object to which it points
    double *dp = &i;

    // ip is a pointer to an object of type int
    // However, this assignment is illegal
    // A pointer can never be assigned a variable of type int if the variable's value is zero
    int *ip = i;

    //Legal as p points to an object of type int
    // Subsequent to the assignment, it holds address for an object of type int
    int *p = &i;

    std::cout << *p << std::endl;
    std::cout << i << std::endl;

    return 0;
}