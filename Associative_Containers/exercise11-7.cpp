/*
Define a map for which key is the family's last name and the value is a vector of the children's names.
Write code to add new families and to add new children to an existing family.
*/

#include <iostream>
#include <map>
#include <vector>
#include <string>

using std::map;
using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::cin;

map<string, vector<string>> familychildren;
string last_name, children_name, response;

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
        cout << "Enter family members: (Enter 'Done' when finished) " << endl;
        while (cin >> children_name)
        {
            if (children_name == "Done")
            {
                break;
            }
            familychildren[last_name].push_back(children_name);
        }
    }
    
    for (const auto &w : familychildren)
    {
        cout << "Family Name: " << w.first << ", Family Members: ";
        for (const auto &f : w.second) {
            cout << f << " "; 
        }
        cout << endl;
    }
    


    return 0;
}