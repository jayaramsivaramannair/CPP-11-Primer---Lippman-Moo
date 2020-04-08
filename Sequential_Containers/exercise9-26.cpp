/*
Using the below definition of ia, copy ia into a vector and into a list. 
Use the single-iterator form of erase to remove elements with odd values from your list
and the even values from your vector.

int ia[] = {1,2,3,4,5,6,7,8,9,10};
*/

#include <vector>
#include <iostream>
#include <list>

using std::cout;
using std::endl;
using std::vector;
using std::list;

int ia[] = {1,2,3,4,5,6,7,8,9,10};
vector<int> ivec;
list<int> ilist;

int main()
{
    for (auto i : ia) // Add elements from ia to the vector.
    {
        ivec.push_back(i);
    }

    for (auto i : ia) // Add elements from ia to the list.
    {
        ilist.push_back(i);
    }

    auto vbegin = ivec.begin();
    auto lbegin = ilist.begin();

    while (vbegin != ivec.end())
    {
        if(*vbegin % 2 == 0)
        {
            vbegin = ivec.erase(vbegin); // erase the even element and return iterator to the next element
        } else {
            vbegin++; // Increment the iterator if the element is odd.
        }
    }

    while (lbegin != ilist.end())
    {
        if(*lbegin % 2)
        {
            lbegin = ilist.erase(lbegin); // erase the odd element and return iterator to the next element
        } else {
            lbegin++; // Increment the iterator if the element is even.
        }
    }

    cout << "Printing Odd Elements from the Vector: " << endl;
    for (auto i : ivec)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Printing Even Elements from the List: " << endl;
    for (auto i : ilist)
    {
        cout << i << " ";
    }
    cout << endl;


    return 0;
}