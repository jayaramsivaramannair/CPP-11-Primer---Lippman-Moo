#include <iostream>

int main()
{
    int a = 3, b = 4; // a & b are ints
    decltype(a) c = a; // c is an int
    decltype((b)) d = a; // d is a reference to an int 'a'
    ++c;
    ++d; // This will increment a

    std::cout << b << std::endl;
    std::cout << c << std::endl;
    std::cout << a << std::endl;
    std::cout << d << std::endl;
    d = d + 2;
    std::cout << a << std::endl;
    return 0;
}