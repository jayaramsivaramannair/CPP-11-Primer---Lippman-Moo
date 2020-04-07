/*
Write a program to copy elements from a list<int> into two deques.
The even-valued elements should go into one deque and odd ones into the other.
*/

#include <iostream>
#include <list>
#include <deque>

using std::cout;
using std::endl;
using std::list;
using std::deque;

int main()
{
    list<int> li{91,92,93,94,95,96,97,98,99,100};
    deque<int> even_deque;
    deque<int> odd_deque;

    for (auto elem : li)
    {
        if ((elem % 2) == 0) { // if even
            even_deque.push_back(elem);
        } else {
            odd_deque.push_back(elem);
        }
    }
    cout << "Deque with Even Ints: ";
    for (auto elem : even_deque)
    {
        cout << elem << " ";
    }

    cout << endl;

    cout << "Deque with Odd Ints: ";
    for (auto elem : odd_deque)
    {
        cout << elem << " ";
    }

    cout << endl;

    return 0;
}