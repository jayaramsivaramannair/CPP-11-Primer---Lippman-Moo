/*
Combining exercises 11-20 and exercises 11-21

Rewrite the word-counting program from exercise11-3 to use insert instead of subscripting.
Also, use the following loop to while adding count for a word:

while (cin >> word)
    ++word_count.insert({word, 0}).first->second;
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
        ++word_count.insert({result, 0}).first->second;
        result = "";
    }
    cout << endl;

    map<string,size_t>::const_iterator const_map_it = word_count.cbegin(); // Define an iterator for a map without using auto or decltype

    while (const_map_it != word_count.cend())
    {
        cout << const_map_it->first << " occurs " << const_map_it->second
        << ((const_map_it->second > 1) ? " times." : " time.") << endl;
        
        const_map_it++;
    }

    return 0;
}

/*
Subscripting is easier than insert method for this word_count program
*/