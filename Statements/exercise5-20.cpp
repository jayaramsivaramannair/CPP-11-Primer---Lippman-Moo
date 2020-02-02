/*
 * Write a program to read a sequence of strings from the standard input until either
 * the same word occurs twice in succession or all the words have been read.
 * Use a while loop to read the text one word at a time. Use the break statement to terminate the
 * loop if a word occurs twice in succession. Print the word if it occurs twice in succession
 * or else print a message saying that no word was repeated.
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
            cout << previousWord << " occurs twice in succession." << endl;
            break;
        }

        if (word == "0")
        {
            cout << "No repetition occurs." << endl;
            break;
        }
        previousWord = word;
    }

    return 0;
}