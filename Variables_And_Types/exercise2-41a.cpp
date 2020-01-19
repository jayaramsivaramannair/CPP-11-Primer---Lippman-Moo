/*
* Using Sales_data class: write a program which reads several transactions with distinct or same ISBNs
* Write the sum once transactions with the same ISBN have been finished entering
* The records for each ISBN are grouped together
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
    double price = 0; //Price per book, used to calculate total revenue
    double sum = 0;
    int number_of_transactions = 0;
    Sales_data previous, current;

    std::cout << "How many transactions you want to enter? ";
    std::cin >> number_of_transactions;

    std::cin >> previous.bookNo >> previous.units_sold >> price;
    previous.revenue = previous.units_sold * price;
    sum += previous.revenue;

    if (number_of_transactions == 1)
    {
        std::cout << "The revenue for " << previous.bookNo
                  << " is " << sum << std::endl;
        return 0;
    }

    number_of_transactions = number_of_transactions - 1;

    while (number_of_transactions > 0)
    {
        std::cin >> current.bookNo >> current.units_sold >> price;
        current.revenue = current.units_sold * price;


        if (previous.bookNo == current.bookNo)
        {
            sum += current.revenue;
            previous = current;

        } else {
            std::cout << "The revenue for " << previous.bookNo
                      << " is " << sum << std::endl;
            previous = current;
            sum = previous.revenue;
        }
        number_of_transactions--;
    }
    std::cout << "The revenue for " << current.bookNo
              << " is " << sum << std::endl;

    return 0;
}