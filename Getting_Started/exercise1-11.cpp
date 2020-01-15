/*
* Prompt the user for two integers.
* Then print each number in the range between those two integers.
*/

#include <iostream>

int main()
{
    int val1, val2;
    
    std::cout << "Enter two numbers (lower followed by higher) : " << std::endl;
    std::cin >> val1;
    std::cin >> val2;
    
    while (val1 <= val2)
    {
        std::cout << val1 << std::endl;
        val1++;
    }
    
    return 0;
}