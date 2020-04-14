/*
Now print the elements in reverse order using ordinary iterators
*/

#include <iterator>
#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

vector<int> ivec{11,12,13,14,15,16,17,18,19,20};
vector<int>::iterator iter = ivec.end() - 1;

int main()
{
    cout << "Printing Vector Elements in Reverse Order Using Ordinary Iterators:" << endl;
    for(; iter != ivec.begin() - 1; iter--)
    {
        cout << *iter << " ";
    }
    cout << endl;
    return 0;
}