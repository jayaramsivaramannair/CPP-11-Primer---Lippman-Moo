#include <iostream>

int main()
{
    std::cout << "/*" << std::endl;
    std::cout << "*/" << std::endl;
    std::cout << /* "*/"  */" << std::endl; // Put a double quote after the last */ to get rid of error
    std::cout << /*  "*/"  /*  "/*"   */ << std::endl;
    return 0;
}