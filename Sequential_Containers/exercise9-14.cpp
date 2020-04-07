/*
Write a program to assign elements from a list of char* pointers
to C-style character strings to a vector of strings
*/

#include <iostream>
#include <list>
#include <vector>
#include <string>

using std::vector;
using std::list;
using std::string;

list<const char*> l1{"hi!", "hiya!", "hello!", "moshi, moshi!", "namaste!"};

int main()
{
    vector<string> v1;
    v1.assign(l1.begin(), l1.end());

    for (auto e : v1)
    {
        std::cout << e << " ";
    }

    std::cout << std::endl;

    return 0;
}