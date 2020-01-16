/*
This program shows how mixing up types in arithmetic
expressions can yield unexpected results. 
*/

#include <iostream>

int main()
{
    unsigned u = 10, u2 = 42;
    // The result (as expected) will be 32
    std::cout << u2 - u << std::endl; 
    // Expected result is -32 however as the type is unsigned, the actual result will be meaningless
    std::cout << u - u2 << std::endl;
    std::cout << std::endl;
    
    int i = 10, i2 = 42;
    // The result will be 32
    std::cout << i2 - i << std::endl; 
    // Type int can store both negative as well as positive values
    // The result will be -32 (as expected)
    std::cout << i - i2 << std::endl;
    std::cout << std::endl;
    
    //Type mixing but the result(since not negative) will be zero (as expected)
    std::cout << i - u << std::endl; 
    std::cout << u - i << std::endl;
    
    return 0;
}