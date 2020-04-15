/*
Write your own version of the word-counting program.
Also extend your program to ignore case and punctuation. For example, "example.", "example,"
and "Example" should all increment the same counter.
*/

#include <iostream>
#include <string>
#include <cctype>
#include <map>
#include <algorithm>

using std::string;
using std::map;
using std::cout;
using std::endl;
using std::cin;

map<string, size_t> word_count;
string word, result;

int main()
{
    cout << "Enter words (Enter 'quit' when done): " << endl;

    while (cin >> word)
    {
        if (word == "quit")
        {
            break;
        }
        std::transform(word.begin(), word.end(), word.begin(), tolower); // Convert each char from upper to lower case.
        remove_copy_if(word.begin(), word.end(), back_inserter(result), ispunct); // remove all the punctuation marks such as !, ., ? from the word.
        ++word_count[result];
        result = "";
    }

    for (const auto & w : word_count)
    {
        cout << w.first << " occurs " << w.second
        << ((w.second > 1) ? " times." : " time.") << endl;
    }

    return 0;
}