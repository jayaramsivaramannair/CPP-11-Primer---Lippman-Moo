/*
a) Explain what the following program does:

vector<string> svec;
svec.reserve(1024);
string word;
while (cin >> word)
{
    if (word == "quit")
    {
        break;
    }
    svec.push_back(word);
}

svec.resize(svec.size() + svec.size() / 2);

    Solution
     * The above code adds words entered in standard input into the vector
     * and increases the vector size to 1.5 times the current size and adds empty strings
     * for elements which does not have any explicitly provided string.

b) If the above program reads 256 words, what is its likely capacity after it is resized?
Similarly, what will be the capacity if it is resized after reading 512, 1000 or 1048 words?

Solution:
If 256 words are read in the previous program, capacity will be 1024 after resizing
if 512 words are read in the previous program, capacity will be 1024 after resizing
if 1000 words are read in the previous program, capacity will be 2048, on my machine, after resizing
if 1048 words are read in the previous program, capacity will be 2048, on my machine, after resizing 
*/

#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    vector<string> svec;
    svec.reserve(1024);
    string word;


    while (cin >> word)
    {
        if (word == "quit")
        {
            break;
        }
        svec.push_back(word);
    }
    cout << "Before resizing:- ";
    cout << "Size: ";
    cout << svec.size() << ", Capacity: " << svec.capacity() << endl;

    svec.resize(svec.size() + svec.size() / 2);

    cout << "After resizing:- ";
    cout << "Size: ";
    cout << svec.size() << ", Capacity: " << svec.capacity() << endl;

    return 0;
}

