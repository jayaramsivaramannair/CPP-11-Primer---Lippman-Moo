/*
* Write a program using a switch statement to count the number of vowels
* in text read from cin
*/

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    char ch;
    
    cout << "Start entering characters......(Enter '%' to quit): " << endl;
    
    while (ch != '%')
    {
        cin >> ch;
        
        switch(ch)
        {
            case 'a':
                ++aCnt;
                break;
            case 'e':
                ++eCnt;
                break;
            case 'i':
                ++iCnt;
                break;
            case 'o':
                ++oCnt;
                break;
            case 'u':
                ++uCnt;
                break;
        }
    }
    
    cout << "Number of vowel a: \t" << aCnt << '\n'
         << "Number of vowel e: \t" << eCnt << '\n'
         << "Number of vowel i: \t" << iCnt << '\n'
         << "Number of vowel o: \t" << oCnt << '\n'
         << "Number of vowel u: \t" << uCnt << endl;
    
    
    return 0;
}