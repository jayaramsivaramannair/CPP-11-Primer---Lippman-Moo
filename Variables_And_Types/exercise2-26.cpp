#include <iostream>
#include <iostream>

int main()
{
    // Illegal as variables with the const qualifier must be initialized at the time of their creation.
    const int buf;

    // Legal; a regular int variable initialized with 57
    int cnt = 57;
    std::cout << cnt << std::endl; //Prints 57

    // Legal as sz being a const variable is initialized with a value assigned to cnt
    const int sz = cnt;
    std::cout << sz << std:: endl; //Prints 57

    // Legal as incrementing cnt variable which is non-const
    ++cnt;
    std::cout << cnt << std::endl; //Prints 58

    // Illegal as an attempt to increment sz variable which is const
    ++sz;
    std::cout << sz << std::endl; //Prints 57

    return 0;
}