/*
Assuming vi is a container of ints that includes even and odd values, 
predict the behavior of the following loop. After you have analyized this loop, 
write a program to test whether your expectations were correct:

iter = vi.begin();

while (iter != vi.end())
{
    if (*iter % 2)
    {
        iter = vi.insert(iter, *iter);
    }
    ++iter;
}
*/


/********** SOLUTION 
 * In the above code, if an odd element is encountered then it is duplicated
 * and an iterator is returned to the inserted element however the iterator only advances forward
 * by one element so it keeps encountering the same odd element again and again 
 * and thus gets stuck in a sort of infinite loop so the program will never run 
 * loop has been fixed below to just duplicate the odd element **********/

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

vector<int> vi{1,2,3,4,5,6,7,8,9,10};

int main ()
{
    auto iter = vi.begin();

    while (iter != vi.end())
    {
        if (*iter % 2) // If the element is odd, duplicate it
        {
            iter = vi.insert(iter, *iter); //returns an iterator to the inserted element
            iter += 2;
        } else {
            iter++; //Simply advance the iterator to the next element, if the element is even
        }
    }  

    for (auto i : vi)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}