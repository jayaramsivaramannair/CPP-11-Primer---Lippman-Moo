/*
* Write four different versions of an overloaded function.
* Make the function with different parameters to see which function was 
* chosen as the best match among viable functions.
*/


#include <iostream>

using std::cout;
using std::endl;

void f()
{
    cout << __func__ << " is called with no arguments." << endl;
}

void f(int)
{
    cout << __func__ << " is called with one int argument." << endl;
}

void f(int, int)
{
    cout <<__func__<< " is called with two int arguments." << endl;
}

void f(double, double = 3.14)
{
    cout << __func__<< " is called with two double arguments, one being default." << endl;
}

int main()
{
    //f(2.56, 42); // call is ambiguous in this case
    f(42);
    f(42,0);
    f(2.56,3.14);
    
    return 0;
}