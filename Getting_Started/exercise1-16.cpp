/*
* Print a sum of 10 read from cin.
*/

#include <iostream>


int main()
{
    int val = 0, numbers_entered = 10, sum = 0;
    int original_numbers = numbers_entered;

    std::cout << "Enter " << numbers_entered
              << " numbers: ";

    while(numbers_entered > 0)
    {
        std::cin >> val;
        sum += val;
        numbers_entered--;
    }
    
    std::cout << "Sum of " << original_numbers
              <<" numbers entered are: "
              << sum << std::endl;

    return 0;
}