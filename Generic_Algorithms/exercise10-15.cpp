/*
Write a lambda that captures an int from its enclosing function and takes an int parameter.
The lambda should return the sum of the captured int and the int parameter.
*/

#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int a = 40;
    auto sum = [a] (int b) {return a + b;};

    cout << "The sum is " << sum(30) << endl;

    return 0;
}