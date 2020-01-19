/*
*By including using declaration for names from standard library;
* Prompt the user for two integers and then print each number in the range
* specified by the two integers.
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int i = 0, j = 0;
    cout << "Enter two integers: ";
    cin >> i >> j;

    if (i > j)
    {
        while (j <= i)
        {
            cout << j << endl;
            j++;
        }
    } else {
        while (i <= j)
        {
            cout << i << endl;
            i++;
        }
    }

    return 0;
}