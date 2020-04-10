/*
Use accumulate to sum the elements in a vector <int>
*/

#include <iostream>
#include <numeric>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

vector<int> ivec{10,11,12,13,14,15,16,17,18,19,20};
int sum = 0;

int main()
{
    sum = accumulate(ivec.cbegin(), ivec.cend(), sum);
    cout << "Sum of integers in the vector is " << sum << endl;

    return 0;
}