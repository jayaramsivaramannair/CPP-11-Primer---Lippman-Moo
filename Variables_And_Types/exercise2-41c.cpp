/*
*Using Sales_data class: Write a program that reads several transactions
*Prints a count of transactions which occur for each ISBN
*Records for each ISBN are grouped together
*/

#include <iostream>
#include <string>

struct Sales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main()
{
    int count = 0;
    int number_of_transactions = 0;
    Sales_data previous, current;

    std::cout << "How many transactions you want to enter? ";
    std::cin >> number_of_transactions;

    std::cin >> previous.bookNo >> previous.units_sold;
    count += 1;

    if (number_of_transactions == 1)
    {
        std::cout << "The number of transactions for " << previous.bookNo
                  << " is " << count << std::endl;
        return 0;
    }

    number_of_transactions = number_of_transactions - 1;

    while (number_of_transactions > 0)
    {
        std::cin >> current.bookNo >> current.units_sold;


        if (previous.bookNo == current.bookNo)
        {
            count += 1;
            previous = current;

        } else {
            std::cout << "The number of transactions for " << previous.bookNo
                      << " is " << count << std::endl;
            previous = current;
            count = 1;
        }
        number_of_transactions--;
    }
    std::cout << "The number of transactions for " << current.bookNo
              << " is " << count << std::endl;

    return 0;
}