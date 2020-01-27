/*
*Without using a type alias, auto or decltype, use a range-based for loop
*to print elements of a two-dimensional array
*/

#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int ia[3][4];
    size_t cnt = 0;

    // Adding elements to the array
    for (int (&row)[4] : ia)
    {
        for (int &col : row) {
            col = cnt;
            ++cnt;
        }
    }

    // Accessing elements of the array and printing them

    for (int(&row)[4] : ia)
    {
        for (int col : row)
        {
            cout << " " << col << " ";
        }
        cout << endl;
    }

    return 0;
}


