/*
A Program that uses a while loop to sum numbers from 50 to 100
*/

#include <iostream>

int main()
{
    int val, sum;
    val = 50, sum = 0;
    
    while (val <= 100)
    {
        sum += val;
        val++;
    }
    
    std::cout << "The sum of numbers from 50 to 100 (inclusive): "
              << sum << std::endl;
    
    return 0;
}