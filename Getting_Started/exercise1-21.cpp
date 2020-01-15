#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item1, item2;
    std::cin >> item1; //Reads Transaction for the first item
    std::cin >> item2; // Reads Transaction for the second item
    
    std::cout << item1 + item2 << std::endl; //Prints the sum of transactions for the two items
    return 0;
}