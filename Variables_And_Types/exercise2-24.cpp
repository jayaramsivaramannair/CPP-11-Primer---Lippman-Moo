#include <iostream>

int main()
{
    int i = 42;

    // Assigment is legal as p is a void pointer which can hold the address for an object of any type
    void *p = &i;

    // Assigment is illegal as lp is a pointer to an object of type long
    // however, it is assigned the address for an object of type int
    long *lp = &i;

    return 0;
}