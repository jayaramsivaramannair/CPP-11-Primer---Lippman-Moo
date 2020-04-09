/*
Read values into a list of strings and print a count, using the count algorithm' of 
how many elements have a given value
*/

#include <algorithm>
#include <list>
#include <iostream>

using std::list;
using std::cout;
using std::cin;
using std::endl;
using std::count;
using std::string;

list<string> lstr;
string count_value = "apple";
string word;

int main()
{
    cout << "Start entering strings: " << endl;
    while (cin >> word)
    {
        if (word == "quit")
        {
            break;
        }
        lstr.push_back(word);
    }

    auto result = count(lstr.cbegin(), lstr.cend(), count_value);

    cout << count_value << " appears " << result << ((result == 1) ? " time" : " times")
         << " in the list." << endl; 

    return 0;
}

