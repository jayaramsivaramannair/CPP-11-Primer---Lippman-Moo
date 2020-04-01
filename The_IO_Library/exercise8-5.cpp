/* Write a function to open a file for input and read its contents into a vector of strings, 
storing each WORD as a separate element in the vector */

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using std::string;
using std::ifstream;
using std::cout;
using std::endl;
using std::vector;



vector<string> read_into_vector(string filename)
{
    ifstream f(filename);
    string word;
    vector<string> file_words;

    if(f)
    {
        while (f >> word)
        {
            file_words.push_back(word);
        }
    }
    return file_words;
}

int main()
{
    vector<string> words = read_into_vector("profession.txt");

    for(auto i : words)
    {
        cout << i << endl;
    }
}