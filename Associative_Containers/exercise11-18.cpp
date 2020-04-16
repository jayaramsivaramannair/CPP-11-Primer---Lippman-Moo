/*
Combining Exercises 11-16 and Exercises 11-18.

Write the type of map_it (iterator to iterate through a map) employing a loop however without
using auto or decltype.
Use a map iterator, write an expression that assigns a value to an element
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
    cout << endl;
    cout << "Printing the Word Count Before Incrementing: " << endl;
    map<string,size_t>::const_iterator const_map_it = word_count.cbegin(); // Define an iterator for a map without using auto or decltype

    while (const_map_it != word_count.cend())
    {
        cout << const_map_it->first << " occurs " << const_map_it->second
        << ((const_map_it->second > 1) ? " times." : " time.") << endl;
        
        const_map_it++;
    }

    map<string,size_t>::iterator map_it = word_count.begin();
    while (map_it != word_count.end())
    {
        map_it->second += 1; // Incrementing the count for each word once.
        map_it++;
    }
    cout << endl;
    cout << "Printing the Word Count After Incrementing: " << endl;
    const_map_it = word_count.cbegin();

    while (const_map_it != word_count.cend())
    {
        cout << const_map_it->first << " occurs " << const_map_it->second
        << ((const_map_it->second > 1) ? " times." : " time.") << endl;

        const_map_it++;
    }

    return 0;
}