/* 
Read from a named file rather than from cin.
Reads data from a file containing people's name and associated phone numbers and then stores
them into a class having a string member - name and another vector<string> member - phones 
*/

#include <string>
#include <iostream>
#include <vector>
#include <sstream>
#include <fstream>
#include <iterator>

using std::endl;
using std::cout;
using std::string;
using std::vector;
using std::istringstream;
using std::ifstream;

struct PersonInfo {
    string name;
    vector<string> phones;
};

int main()
{
    string line, word;
    vector<PersonInfo> people;
    ifstream f("person_info.txt");

    while(getline(f, line))
    {
        PersonInfo info;
        istringstream record(line);
        record >> info.name;
        while(record >> word)
        {
            info.phones.push_back(word);
        }
        people.push_back(info);
    }

    for (size_t i = 0; i < people.size(); i++)
    {
        cout << people[i].name << " ";
        for (auto j : people[i].phones)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
}