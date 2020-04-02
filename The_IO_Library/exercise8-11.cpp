/*
Scrutinize the program below in comments where istringstream object is defined inside the outer while
loop. What changes would be needed to make if record were defined outside that loop. 
Rewrite the program below to move the definition of record outside the while and see
whether all the needed changes have been appropriately made:

struct PersonInfo {
    string name;
    vector<string> phones;
};

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
    istringstream record; //Moved the definition outside the outer while loop

    while(getline(f, line))
    {
        PersonInfo info;
        record.str(line); // During each iteration of the while loop. Copying the string into record.
        record >> info.name;
        while(record >> word)
        {
            info.phones.push_back(word);
        }
        record.clear(); //Reset all the existing values in record
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
