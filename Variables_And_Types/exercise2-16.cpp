#include <iostream>

int main()
{
    int i = 0, &r1 = i; // r1 is a reference type bound to i of type int
    double d = 0, &r2 = d; // r2 is a reference type bound to d of type double

    std::cout << d << std::endl; // Prints the original value 0.00 before re-assignment
    r2 = 3.14159; //Valid as the value is assigned to the object, in this case d, to which r2 is bound
    std::cout << d << std::endl; // Prints the reassigned value which is 3.14159
    std::cout << std::endl;

    std::cout << d << std::endl; // Prints the value 3.14159
    r2 = r1; // Alternatively, can be interpreted as d = i;
    std::cout << d << std::endl; // Prints the value 0 after d has been assigned the original value of i
    std::cout << std::endl;

    std::cout << i << std::endl; // Prints the value 0 which is the original value
    i = r2; // alternatively can be interpreted as i = d;
    std::cout << i << std::endl; // Prints the value 0 which is the current value of d
    std::cout << std::endl;

    std::cout << i << std::endl;
    r1 = d; // alternatively can be interpreted as i = d
    std::cout << i << std::endl;
    std::cout << std::endl;
    
    return 0;
}