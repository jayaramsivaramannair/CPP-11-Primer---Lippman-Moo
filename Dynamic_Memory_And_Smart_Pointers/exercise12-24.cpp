/*
Write a program that reads a string from the standard input into a dynamically allocated character array.
Describe how your program handles varying size inputs. Test your program by giving it a string of data
that is longer than the array size you've allocated
*/

#include <iostream>
#include <memory>
#include <string>

using std::string;
using std::cout;
using std::endl;
using std::cin;

string input_string;
int arr_size;
char *pchar = new char[arr_size];

int main()
{
    cout << "Input a string: " << endl;
    cin >> input_string;
    arr_size = input_string.size() + 1; // This will help the program handle varying size inputs.
    cout << arr_size << endl;

    // Save each character from the string in the dynamic array
    for (int i = 0; i < arr_size; i++)
    {
        *(pchar + i) = input_string[i];
    }
    *(pchar + arr_size) = '\0';

    // Prints elements from the dynamic array
    for(char *q = pchar; q != pchar + arr_size; q++)
    {
        cout << *q;
    }
    cout << endl;


    return 0;
}