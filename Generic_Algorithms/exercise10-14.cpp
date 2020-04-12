/*
Write a lambda that takes two ints and returns their sum
*/

#include <iostream>

using std::cout;
using std::endl;

int main()
{
    auto sum = [] (int a, int b) {return a + b;};

    cout << "The sum is " << sum(21,21) << endl;

    return 0;
}