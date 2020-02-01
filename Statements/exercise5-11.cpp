/*
* Write a program using a switch statement to count the number of vowels.
* The count includes both vowels entered in lower as well as uppercase
* Also, ensure that the program keeps a count of blank spaces, tabs and newlines read
*/

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    unsigned blankCnt = 0, tabCnt = 0, newlineCnt = 0;
    char ch;
    
    cout << "Start entering characters......(Enter '%' to quit): " << endl;
    
    while (ch != '%')
    {
        cin.get(ch);  // cin.get instead of '>>" operator since it ignores whitespace
        
        switch(ch)
        {
            case 'a':
            case 'A':
                ++aCnt;
                break;
                
            case 'e':
            case 'E':
                ++eCnt;
                break;
                
            case 'i':
            case 'I':
                ++iCnt;
                break;
                
            case 'o':
            case 'O':
                ++oCnt;
                break;
                
            case 'u':
            case 'U':
                ++uCnt;
                break;
                
            case ' ':
                ++blankCnt;
                break;
                
            case '\t':
                ++tabCnt;
                break;
                
            case '\n':
                ++newlineCnt;
                break;
        }
    }
    
    cout << "Number of vowel a: \t" << aCnt << '\n'
         << "Number of vowel e: \t" << eCnt << '\n'
         << "Number of vowel i: \t" << iCnt << '\n'
         << "Number of vowel o: \t" << oCnt << '\n'
         << "Number of vowel u: \t" << uCnt << '\n'
         << "Number of blank spaces: \t" << blankCnt << '\n'
         << "Number of tabs: \t" << tabCnt << '\n'
         << "Number of newlines: \t" << newlineCnt << endl;
    
    
    return 0;
}