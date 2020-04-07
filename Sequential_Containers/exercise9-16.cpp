/*
Write a program to comapre elements in a list<int> to elements in a vector<int>
*/

#include <iostream>
#include <vector>
#include <list>

using std::list;
using std::vector;

int main()
{
    list<int> l1 {1,2,3,4,5,6,7,8,9};
    vector<int> v1 {1,2,3,4};

    auto lbeg = l1.begin();
    auto lend = l1.end();
    auto vbeg = v1.begin();
    auto vend = v1.end();

    if (l1.size() != v1.size())
    {
        std::cout << "Containers have different elements!" << std::endl;
    } else {
        for(; (lbeg != lend) || (vbeg != vend)
            ; lbeg++, vbeg++)
        {
            if(*lbeg != *vbeg)
            {   
               std::cout << "Containers have different elements!" << std::endl;
               return 0;
             }
        }
        std::cout << "Containers have same elements!" << std::endl;
    }

    return 0;
}

