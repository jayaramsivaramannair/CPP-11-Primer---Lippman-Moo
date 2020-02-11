/*
 * Revise the transaction processing program on page24 to use the isbn() and combine() members
 */

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;
using std::cerr;

struct Sales_data
{
    string isbn() const {return bookNo;}
    Sales_data& combine(const Sales_data&);

    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

Sales_data& Sales_data::combine(const Sales_data &rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

int main()
{
    int number_of_transactions = 10;
    Sales_data total;

    if (std::cin >> total.bookNo >> total.units_sold >> total.revenue)
    {
        Sales_data trans;
        while (std::cin >> trans.bookNo >> trans.units_sold >> trans.revenue)
        {
            if(total.isbn() == trans.isbn())
            {
                total.combine(trans);
            } else {
                cout << total.bookNo << " " << total.units_sold << " " << total.revenue;
                total = trans;
            }
        }
        cout << total.bookNo << " " << total.units_sold << " " << total.revenue;
    } else {
        cerr << "No data?!" << endl;
        return -1;
    }
    return 0;
}