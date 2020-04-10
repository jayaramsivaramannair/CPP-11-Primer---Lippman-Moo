/*
Assuming v is a vector<double>, what if anything, is wrong with calling 
accumulate(v.cbegin(), v.cend(), 0)?
*/

/*
Use accumulate to sum the elements in a vector <int>
*/

#include <iostream>
#include <numeric>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

vector<double> v{10.5,11.5,12.5,13.5,14.5,15.5,16.5,17.5,18.5,19.5,20.5};
int sum;

int main()
{
    sum = accumulate(v.cbegin(), v.cend(), 0);
    cout << "Sum of values in the vector is " << sum << endl;

    return 0;
}

/*
COMMENT:
In the above case, since the type of third argument is an int, all the element types in
vector will be converted to int before they are added up. 
Thus, if we want to be final sum to be of type double, the third argument must be of type double 
as well.
*/