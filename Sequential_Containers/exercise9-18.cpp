/*
Write a program to read a sequence of strings from the standard input into a deque.
Use iterators to write a loop to print the elements in the deque. 
*/

#include <iostream>
#include <deque>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::deque;
using std::string;

deque<string> d1;
string word;

int main()
{
    cout << "Start inputting strings (Enter 'quit' when done:)" << endl;

    while (cin >> word)
    {
        if (word == "quit")
        {
            break;
        }
        d1.push_back(word);
    }

    cout << "Printing contents of deque: " << endl;

    for (auto dbeg = d1.begin(); dbeg != d1.end(); dbeg++)
    {
        cout << *dbeg << endl;
    }

    return 0;
}