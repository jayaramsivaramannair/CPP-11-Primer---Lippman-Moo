/*
* Write a program to define two character arrays initialized from string literals.
* Also, define a third character array to hold the concatenation of the two arrays.
* Use strcpy and strcat to copy the two arrays into the third.
*/

#include <iostream>

using std::cout;
using std::endl;

int main()
{
    char ca1[] = "Thanks,\0";
    char ca2[] = "for making my world!\0";

    char lrgstr[strlen(ca1) + strlen(ca2) + 1];

    strcpy(lrgstr, ca1); // Copies the contents of ca1 into lrgstr
    strcat(lrgstr, " "); // Appends a space after the current contents in lrgstr
    strcat(lrgstr, ca2); // Appends the contents of ca2 into lrgstr

    char *p = lrgstr; // Creates a pointer to the first character in lrgstr;

    cout << "The concatenated string is: " << endl;
    while (*p)
    {
        cout << *p;
        p++;
    }
    cout << endl;

    return 0;
}
