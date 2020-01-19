/*
*By including the using declaration, write a program which 
*sums numbers from 50 to 100
*/


#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int i = 50, sum = 0;
    
    while (i <= 100)
    {
        sum += i;
        i++;
    }
    
    cout << "The sum of numbers from 50 to 100" 
         << "(Both Inclusive) is " << sum << endl;
    
    return 0;
}