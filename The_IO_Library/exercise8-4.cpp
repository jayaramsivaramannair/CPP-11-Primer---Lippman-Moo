/* Write a function to open a file for input and read its contents into a vector of strings, 
storing each LINE as a separate element in the vector */


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
    string line;
    vector<string> file_lines;

    if(f)
    {
        while (!(f.eof()))
        {
            getline(f,line);
            file_lines.push_back(line);
        }
    }
    return file_lines;
}

int main()
{
    vector<string> lines = read_into_vector("profession.txt");

    for(auto i : lines)
    {
        cout << i << endl;
    }
}