#include <iostream>

int main()
{
    int a = 3, b = 4;
    decltype(a) c = a; // c is an int
    decltype(a = b) d = a; // decltype returns the type as reference thus d is a reference to int 'a'
    c++;
    d++;

    std::cout << c << std::endl; //Prints 4
    std::cout << a << std::endl; //Prints 4
    d = d + 5; // a will be incremented by 5
    std::cout << a << std::endl; //Prints 9
    return 0;
}