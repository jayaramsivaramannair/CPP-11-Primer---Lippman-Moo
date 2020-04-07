/*
iv is a vector of ints, correct the problems, if any, in the following piece of code:

vector<int>::iterator iter = iv.begin(), mid = iv.begin() + (iv.size() / 2);

while(iter != mid)
{
    if (*iter == some_val)
        iv.insert(iter, 2 * some_val);
}
*/

//Problem with the code listed above, is that the iterator never advances to point to the next element

#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;


int main()
{
    vector<int> iv {1,2,3,4,5,6,7,8};
    int some_val = 2;
    vector<int>::iterator iter = iv.begin(), mid = iv.begin() + (iv.size() / 2);

    while(iter != mid)
    { 
        if(*iter == some_val)
        {
            iv.insert(iter, 2 * some_val);
        }
        iter++;
    }

    for (auto elem : iv)
    {
        cout << elem << " ";
    }

    cout << endl;

    return 0;
}