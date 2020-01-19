/*
*By including using declaration for names in standard library; use the decrement operator and while loop
*to print numbers from ten down to zero
*/

#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int i = 10;
    
    while (i >= 0)
    {
        
        cout << i << endl;
        i--;
    }
    
    return 0;
}