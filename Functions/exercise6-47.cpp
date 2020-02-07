/*
 * Use recursion to print contents of a vector and also conditionally print information
 * about its execution such as size of the vector on each call.
 * Compile and run the program with debugging turned on and again with it turned off
 */

#include <iostream>
#include <vector>
#include <iterator>


using std::vector;
using std::cout;
using std::endl;
using std::cerr;
using std::iterator;

void print_vector(const vector<int> &ivec, const vector<int>::iterator it)
{
    #ifndef NDEBUG
        cerr << __func__ << ": vector size is " << ivec.size() << endl;
    #endif
    if (it == ivec.end()) // Base condition
        return;
    cout << *it << " ";
    print_vector(ivec, it + 1); // Recursive call
}

int main()
{
    vector<int> ivec{1,2,3,4,5,6,7,8,9,10};
    auto it = ivec.begin();

    print_vector(ivec, it);

    return 0;
}