/*
Using a loop and the iterator returned from insert method to add elements to a vector
*/

#include <iostream>
#include <string>
#include <vector>

using std::vector;
using std::string;

int main()
{
    vector<string> svec;
    string word;

    auto iter = svec.begin();

    std::cout << "Please enter words (Enter 'quit' when done) " << std::endl;

    while(std::cin >> word)
    {
        if (word == "quit")
        {
            break;
        }
        iter = svec.insert(iter, word);
    }

    std::cout << "Printing entered words: " << std::endl;
    for (auto elem : svec)
    {
        std::cout << elem << std::endl;
    }

    return 0;
}