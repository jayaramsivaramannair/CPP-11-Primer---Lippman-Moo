/*
Update the program from exercise 10-30 to use streamiterators, sort, and copy to read a sequence
of inputs from the standard input, sort them and then write only the unique elements to the 
standard output. Your program should use unique_copy
*/

#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>

using std::cout;
using std::endl;
using std::cin;
using std::istream_iterator;
using std::ostream_iterator;
using std::vector;

istream_iterator<int> in(cin), eof;
ostream_iterator<int> out_iter(cout, "\n");
vector<int> ivec, ivec2;

int main()
{
    while (in != eof)
    {
        if (*in == 0)
        {
            break;
        }
        ivec.push_back(*in++);
    }
    cout << "Sorting elements........." << endl;
    sort(ivec.begin(), ivec.end());
    unique_copy(ivec.begin(), ivec.end(), back_inserter(ivec2));
    cout << "Printing Unique Vector Elements" << endl;
    copy(ivec2.begin(), ivec2.end(), out_iter);

    return 0;
}