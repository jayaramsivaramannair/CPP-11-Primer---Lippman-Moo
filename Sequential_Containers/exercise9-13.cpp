/*
Initialize a vector <double> from a list <int>
Also, initialize a vector<double> from vector<int>
*/

#include <iostream>
#include <vector>
#include <list>

using std::list;
using std::vector;

list<int> l1 {11,12,13,14,15,16,17,18,19,20};
vector<int> v2 {21,22,32,34,35,36,37,38,39,40};

int main()
{
    // Can be copied only by passing iterators denoting range as container mis-match
    vector<double> v1(l1.begin(), l1.end()); 
    
    // Can be copied only by passing iterators denoting range as container mis-match
    vector<double> v3(v2.begin(), v2.end());

    for(auto e : v1)
    {
        std::cout << e << " ";
    }
    std::cout << std::endl;

    for (auto e : v3)
    {
        std::cout << e << " ";
    }
    std::cout << std::endl;
    return 0;
}