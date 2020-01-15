/*
* Write a program that uses mulplication operation * to multiply two numbers
* and then print their product
*/

#include <iostream>

int main()
{
    int v1, v2;
    v1 = v2 = 0;
    
    std::cout << "Enter two numbers: " << std::endl;
    std::cin >> v1 >> v2;
    
    std::cout << "The Product of " << v1 << " and " << v2 
              << " is " << v1 * v2 << std::endl;
    
    return 0;
}