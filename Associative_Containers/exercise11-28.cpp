/* 
Define and initialize a variable to hold the result of calling find on a map from
string to vector of int.
*/

#include <iostream>
#include <map>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::map;
using std::string;
using std::vector;

map<string,vector<int>> m{{"Jayaram", {35,36,37,38}}, {"Seema", {98,97,96,95}}, {"Ashwathi", {34,23}}, {"Latha", {46,57,68}}};

int main()
{
    map<string,vector<int>>::iterator itersearch = m.find("Jayaram");

    cout << "Values associated with the 'Key: " << itersearch->first << "' are ";

    for (auto &w : itersearch->second)
    {
        cout << w << " ";
    }
    cout << endl;
}