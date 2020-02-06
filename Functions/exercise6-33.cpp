/*
 * Write a recursive function to print the contents of a vector
 */


#include <iostream>
#include <vector>
#include <iterator>

using std::vector;
using std::cout;
using std::endl;
using std::iterator;

void printVector(const vector<int> &ivec, vector<int>::const_iterator it)
{
   if (it == ivec.end())
       return;
   cout << *it++ << " ";
   printVector(ivec, it);

}

int main()
{
    const vector<int> ivec{1,2,3,4,5,6,7,8,9,10};
    auto it = ivec.begin();

    printVector(ivec, it);
    return 0;
}