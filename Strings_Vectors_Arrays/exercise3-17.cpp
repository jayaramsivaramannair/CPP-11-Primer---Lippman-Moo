/*
* A Program to read a sequence of words from cin and store them in a vector
* After reading all the words, iterate through the vector and change each word to uppercase
* Print the transformed elements eight words to a line
*/

#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    vector<string> svec;
    string word;
    unsigned words_per_line = 8, i = 1;
    unsigned number_of_words = 0;

    cout << "Enter the number of words which you want to store: " << endl;
    cin >> number_of_words;

    cout << "Start Entering Words...." << endl;

    while (number_of_words > 0)
    {
        cin >> word;
        svec.push_back(word); // Adds word one at a time read into cin
        number_of_words--;
    }

    for (auto &words : svec) // Iterates through each element in the vector
    {
        for (auto &c : words) // Iterates through each character of each element and converts them to uppercase
        {
            c = toupper(c);
        }

    }

    for (auto words : svec) // Iterates through each word stored in the vector
    {
        cout << words << " ";

        if (i == words_per_line)
        {
            cout << endl; // Prints a new line after every 8 words
            i = 0;
        }
        i++;
    }

    return 0;
}

