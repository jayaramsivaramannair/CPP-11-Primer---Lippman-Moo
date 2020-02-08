/*
 * Write a declaration for a function which takes two int parameters and returns an int
 * Also, declare a vector whose elements have this function pointer type
 * Write four functions that add, subtract, multiply and divide two int values and store the pointers
 * to these functions in your declared vector
 */

#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int add(int a, int b)
{
    return a + b;
}

int subtract(int c, int d)
{
    return c - d;
}

int multiply(int e, int f)
{
    return e * f;
}

int divide(int g, int h)
{
    return g / h;
}


int main()
{
    int (*padd) (int, int) {add}; // Pointer to the add Function
    int (*psub) (int, int) {subtract}; // Pointer to the subtract function
    int (*pmul) (int, int) {multiply}; // Pointer to the multiply function
    int (*pdiv) (int, int) {divide}; // Pointer to the divide function
    
    vector<int(*)(int, int)>pfvec{padd, psub, pmul, pdiv}; // A vector with pointers to function as its elements


    return 0;
}