/*
*Without using a type alias, auto or decltype, use an ordinary for loop using pointers
*to change and print elements of a two-dimensional array
*/

#include <iostream>

using std::cout;
using std::endl;

int main()
{
    size_t cnt = 0;
    int ia[3][4];


    // Adding elements to the array
    for (int (*p)[4] = ia; p != ia + 3; p++)
    {
        for (int *q = *p; q != *p + 4; q++)
        {
            *q = cnt;
            cnt++;
        }
    }

    // Accessing and printing elements of a multi-dimensional array
    for (int (*p)[4] = ia; p != ia + 3; p++)
    {
        for (int *q = *p; q != *p + 4; q++)
        {
            cout << " " << *q << " ";
        }
        cout << endl;
    }


    return 0;
}