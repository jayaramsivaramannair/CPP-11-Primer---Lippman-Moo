/*
Use stream iterators, sort, and copy to read a sequence of integers from the standard
input, sort them and then write them back to the standard output
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
vector<int> ivec;


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
    cout << "Printing Vector Elements" << endl;
    copy(ivec.begin(), ivec.end(), out_iter);

    return 0;
}