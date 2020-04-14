/*
Use reverse_iterators to print a vector in reverse order
*/

#include <iterator>
#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

vector<int> ivec{11,12,13,14,15,16,17,18,19,20};
vector<int>::reverse_iterator riter = ivec.rbegin();

int main()
{
    cout << "Printing Vector Elements in Reverse Order Using Reverse Iterators:" << endl;
    for(; riter != ivec.rend(); riter++)
    {
        cout << *riter << " ";
    }
    cout << endl;
    return 0;
}