/*
 * Write a program to read a sequence of strings from the standard input until either
 * the same word (starting with an uppercase letter) occurs twice in succession or all the words have been read.
 * Use a while loop to read the text one word at a time. Use the break statement to terminate the
 * loop if a word occurs twice in succession. Print the word if it occurs twice in succession
 * or else print a message saying that no two words beginning upper case letter were repeated.
 */

#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    string word, previousWord;

    cout << "Enter words (Key 0 when finished entering): " << endl;

    while (cin >> word)
    {
        if (previousWord == word)
        {
            if (isupper(previousWord[0]))
            {
                cout << previousWord << " occurs twice in succession." << endl;
                break;
            } else {
                cout << "The repeated words do not start with an upper case letter." << endl;
                continue;
            }
        }
        
        if (word == "0")
        {
            cout << "No two words starting with an uppercase letter were successively repeated." << endl;
            break;
        }
        previousWord = word;
    }

    return 0;
}