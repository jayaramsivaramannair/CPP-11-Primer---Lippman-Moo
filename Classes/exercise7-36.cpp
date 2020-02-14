/*
 * The following initializer is in error. Identify and fix the problem.
 */

#include <iostream>

using std::cout;
using std::endl;

struct X {
    X(int i, int j) : base(i), rem(i % j) {}
    int rem, base;
};

int main()
{
    X xy(6,2);

    cout << xy.rem << endl;
    cout << xy.base << endl;


    return 0;
}

/*
 * Members of a class are initialized in the order in which they appear inside the class definition
 * In case of above class X, rem will be initialized before base.
 * However, the value of rem depends upon the value of base which is undefined.
 * We can fix the above error, by initializing rem as (i % j) instead of (base % j);
 */