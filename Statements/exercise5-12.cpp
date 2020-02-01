/*
* Write a program using a switch statement to count the number of vowels.
* The count includes both vowels entered in lower as well as uppercase
* Also, keep a count of number of occurences of two-character sequences: ff, fl and fi.
*/

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    unsigned ffCnt = 0, flCnt = 0, fiCnt = 0;
    char ch;
    unsigned firstf = 0;
    char previousChar;

    cout << "Start entering characters......(Enter '%' to quit): " << endl;

    while (ch != '%')
    {
        cin >> ch;

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
                if (previousChar == 'f')
                {
                    fiCnt++;
                    firstf = 0;
                    break;
                } else {
                    ++iCnt;
                    break;
                }

            case 'o':
            case 'O':
                ++oCnt;
                break;
            case 'u':
            case 'U':
                ++uCnt;
                break;
            case 'l':
                if (previousChar == 'f')
                {
                    flCnt++;
                    firstf = 0;
                    break;
                }

            case 'f':
                if (firstf == 1) // If this is the second 'f' being read
                {
                    ++ffCnt;
                    firstf = 0; // reset the firstf in the sequence count to 0
                    break;
                } else {
                    firstf += 1; // If reading the first 'f' in the sequence 'ff'
                    break;
                }
        }
        previousChar = ch;

    }

    cout << "Number of vowel a: \t" << aCnt << '\n'
         << "Number of vowel e: \t" << eCnt << '\n'
         << "Number of vowel i: \t" << iCnt << '\n'
         << "Number of vowel o: \t" << oCnt << '\n'
         << "Number of vowel u: \t" << uCnt << '\n'
         << "Number of sequence ff: \t" << ffCnt << '\n'
         << "Number of sequence fl: \t" << flCnt << '\n'
         << "Number of sequence fi: \t" << fiCnt << endl;


    return 0;
}