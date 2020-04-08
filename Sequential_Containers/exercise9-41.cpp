/*
Write a program that initializes a string from a vector<char>
*/

#include <iostream>
#include <vector>
#include <string>

using std::string;
using std::vector;
using std::cout;
using std::endl;

vector<char> cvec{'a', 'e', 'i', 'o', 'u'};
string vowels(cvec.begin(), cvec.end());

int main()
{
    cout << vowels << endl;

    return 0;
}