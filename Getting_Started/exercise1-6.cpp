#include <iostream>

int main()
{
    
    int v1, v2;
    v1 = v2 = 0;
    
    std::cout << "Enter two numbers: " << std::endl;
    std::cin >> v1 >> v2;
    
    std::cout << "The sum of " << v1;
    std::cout << " and " << v2;
    std::cout << " is " << v1 + v2 << std::endl;
}