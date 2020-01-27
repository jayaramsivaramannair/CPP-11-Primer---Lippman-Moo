/*
*Without using a type alias, auto or decltype, use an ordinary for loop with subscripts
*to change and print elements of a two-dimensional array
*/

#include <iostream>

using std::cout;
using std::endl;

int main()
{
    size_t cnt = 0, rowCnt = 3, colCnt = 4;
    int ia[rowCnt][colCnt];


    //Adding elements to an array

    for (size_t i = 0; i != rowCnt; i++)
    {
        for (size_t j = 0; j != colCnt; j++)
        {
            ia[i][j] = i * colCnt + j;
        }
    }

    // Accessing and printing elements of a multi-dimensional array

    for (size_t i = 0; i != rowCnt; i++)
    {
        for (size_t j = 0; j != colCnt; j++)
        {
            cout << " " << ia[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}