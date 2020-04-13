/*
Write a program using stream iterators to read a text file into a vector of strings
*/

#include <iostream>
#include <iterator>
#include <vector>
#include <fstream>
#include <string>

using std::vector;
using std::string;
using std::ifstream;
using std::istream_iterator;
using std::cout;
using std::endl;

ifstream in("info.txt");
istream_iterator<string> str_it(in), str_eof;
vector<string> svec;

int main()
{
    while(str_it != str_eof)
    {
        svec.push_back(*str_it++);
    }
    
    cout << "Printing vector elements: " << endl;
    for (auto elem : svec)
    {
        cout << elem << endl;
    }

    return 0;
}