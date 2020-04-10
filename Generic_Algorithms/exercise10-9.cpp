/*
Implement your own version of elimDups. Test your program by printing the vector
after you read the input, after the call to unique, and after the call to erase.
*/

#include <iostream>
#include <algorithm>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

vector<int> ivec{1,18,18,18,18,19,19,20,20,20,20,12,12,13,14,14,15,16,17};

void elimDups(vector<int> &numbers)
{
    sort(numbers.begin(), numbers.end());
    cout << "Printing vector elements after sorting: ";
    for (auto elem: numbers)
    {
        cout << elem << " ";
    }
    cout << endl;

    auto end_unique = unique(numbers.begin(), numbers.end());
    cout << "Printing vector elements after applying unique (): ";
    for (auto elem: numbers)
    {
        cout << elem << " ";
    }
    cout << endl;

    numbers.erase(end_unique, numbers.end());
    cout << "Printing vector elements after erasind duplicate elements: ";
    for (auto elem: numbers)
    {
        cout << elem << " ";
    }
    cout << endl;
}

int main()
{
    cout << "Printing current vector elements: ";
    for (auto elem : ivec)
    {
        cout << elem << " ";
    }
    cout << endl;
    elimDups(ivec);
    return 0;
}