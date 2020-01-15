#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item, sum;
    int number_of_transactions = 0;
    
    std::cout << "How many transactions you want to enter? ";
    std::cin >> number_of_transactions;
    
    std::cout << "Enter " << number_of_transactions << " Transactions: ";
        
    while (number_of_transactions > 0)
    {
        std::cin >> item;
        sum += item;
        number_of_transactions--;
    }
  
    std::cout << sum << std::endl; //Prints the sum of all transactions
    return 0;
}