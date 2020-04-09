/*
The algorithm header defines a function named count that, like find, takes a pair of iterators
and a value. count returns a count of how often that value appears. Read a sequence of ints
into a vector and print the count of how many elements have a given value.
*/


#include <algorithm>
#include <vector>
#include <iostream>

using std::vector;
using std::cout;
using std::endl;
using std::count;

vector<int> ivec;
int count_value = 10;

int main()
{
    for (int ix = 0; ix < 8; ix++)
    {
        ivec.push_back(10);
    }

    auto result = count(ivec.cbegin(), ivec.cend(), count_value);

    cout << count_value << " appears " << result << ((result == 1) ? " time" : " times")
         << " in the vector." << endl; 

    return 0;
}

