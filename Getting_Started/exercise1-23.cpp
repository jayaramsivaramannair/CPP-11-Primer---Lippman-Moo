/*
Reads several transactions and then prints the count of transactions which occur
for each ISBN
*/

#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item current, previous;
    int count = 0;
    int number_of_transactions = 0;
        
    std::cout << "How many transactions you want to enter? ";
    std::cin >> number_of_transactions;
    
    std::cin >> previous; // Read the first transaction
    count = count + 1; // Increment count for the first transaction
    number_of_transactions = number_of_transactions - 1; 
    
    while (number_of_transactions > 0)
    {
        std::cin >> current; // Read the subsequent transactions
        if(current.isbn() == previous.isbn()) // Test for equality of ISBN
        {
            count++;
        } else {
            std::cout << "The count for " << previous.isbn()
                      << " is: " << count << std::endl;
            previous = current;
            count = 1;
        }
        number_of_transactions--;
    }
    
    std::cout << "The count for " << current.isbn()
              << " is: " << count << std::endl;
    return 0;
}