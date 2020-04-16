/*
Extend the map of children to their family name that you wrote for exercise11-7.cpp by having
the vector store a pair that holds a child's name and birthday.
*/

#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <utility>

using std::map;
using std::pair;
using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::cin;

map<string, vector<pair<string,string>>> familychildren;
string last_name, children_name, response, birthday;

int main()
{
    while (true)
    {
        cout << "Do you want to update family data? (Enter 'Yes' or 'No')" << endl;
        cin >> response;
        if (response == "No")
        {
            break;
        }
        cout << "Enter a family name: " << endl;
        cin >> last_name;
        cout << "Enter family members followed by their birthday(mm/dd/yyyy): (Enter 'Done' when finished) " << endl;
        while (cin >> children_name)
        {
            if (children_name == "Done")
            {
                break;
            }
            cin >> birthday;
            familychildren[last_name].push_back(make_pair(children_name, birthday));
        }
    }
    
    for (const auto &w : familychildren)
    {
        cout << "Family Name: " << w.first << endl;
        cout << "Family Members and their Birthday: " << endl;
        for (const auto &f : w.second) {
            cout << f.first << ", " << f.second << endl; 
        }
        cout << endl;
    }
    return 0;
}