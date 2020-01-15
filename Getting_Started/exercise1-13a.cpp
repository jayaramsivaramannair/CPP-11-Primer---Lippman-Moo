/*
* Using a for loop to sum numbers from 50 to 100
*/

#include <iostream>

int main()
{
    int sum = 0;
    
    for(int val = 50; val <= 100; val++)
        sum+= val;
    
    std::cout << "Sum of Numbers from 50 to 100 (Both Inclusive): "
              << sum << std::endl;
    
    return 0;
}