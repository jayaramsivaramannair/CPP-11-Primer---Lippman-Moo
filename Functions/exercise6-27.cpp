/*
 * Write a function which takes an initializer_list<int> and produces the sum of the
 * elements in the list
 */

#include <iostream>
#include <initializer_list>

using std::initializer_list;
using std::cout;
using std::endl;

int sum_list(initializer_list<int> il)
{
    int sum = 0;

    for (auto beg = il.begin(); beg != il.end(); ++beg)
    {
        sum += *beg;
    }
    return sum;
}

int main()
{
    cout << "Sum of integers is " << sum_list({11,12,13,14,15,16,17,18,19,20}) << endl;

    return 0;
}