#include <iostream>

int main()
{

    // i is an int and cp is a const pointer to an int
    // Illegal as a const pointer has to be initialized
    int i = 45, *const cp = &i;

    // p1 is a pointer to an int and p2 is a const pointer to an int
    // Illegal as a const pointer has to be initialized
    int *p1, *const p2 = p1;

    // ic is a const int
    // Illegal as const int has to be initialized; r is a reference to a const int.
    const int ic = 47, &r = ic;

    // Illegal; p3 is a const pointer to a const int which must be initialized
    const int *const p3 = &ic;

    // Legal; p is a pointer to a const int and does not have to be initialized
    const int *p;

    // Legal as the value in ic is copied to i
    i = ic;

    //illegal as the p3 points to an object of type const int and p1 points to an int
    p1 = p3;

    //Illegal as p1 is a pointer to an int attempting to hold the address for an object of type const int
    p1 = &ic;

    //Illegal as ic is a const int and thus the original value in ic cannot be overwritten
    ic = *p3;

}