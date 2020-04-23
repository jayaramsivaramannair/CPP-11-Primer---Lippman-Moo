/*
Write a program to implement text queries without defining classes to manage the data.
Your program should take a file and interact with a user to query for words in that file.
Use vector, map and set containers to hold the data for the file and to generate
the results for the queries
*/

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <set>
#include <map>

using std::ifstream;
using std::istringstream;
using std::cout;
using std::endl;
using std::getline;
using std::string;
using std::vector;
using std::cin;
using std::set;
using std::map;

ifstream fname("example_text.txt");
string line, word, query;
vector<string> svec;
set<int> line_numbers;
int word_count = 0;
map<int,string> line_strings;

int main()
{
    cout << "Enter a word for search: ";
    cin >> query;

    if(fname)
    {
        while (getline(fname, line)) //Reads the file line by line and saves each line in the vector<string>
        {
            svec.push_back(line);
        }
    }

    for (size_t i = 0; i != svec.size(); i++)
    {
        istringstream words = istringstream(svec[i]);
        while(words >> word) // Breaks up each file-name into its component words and searches for the query word
        {
            if(word == query) 
            {
                word_count++; //Increments the count for each time the word is encountered.
                line_numbers.insert(i + 1); // Notes the line number that the word occurs on and copies that into a set.
            }
        }
    }

    cout << query << " occurs " << word_count << " times." << endl; // Prints the count for the queried word

    for (auto biter = line_numbers.begin(); biter != line_numbers.end(); biter++)
    {
        int key = *biter;
        line_strings[key] = svec[key - 1]; // Creates a map with key being the line_number in set and associate with line content
    }

    for (auto &x : line_strings) //Access each element from the map
    {
        cout << "(line " << x.first << ") " << x.second << endl;
    }

    return 0;
}