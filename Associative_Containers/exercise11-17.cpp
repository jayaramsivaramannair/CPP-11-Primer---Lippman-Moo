/*
Assuming c is a multiset of strings and v is a vector of strings, explain the following calls. Indicate
whether each call is legal:
a) copy(v.begin(), v.end(), inserter(c, c.end()));
b) copy(v.begin(), v.end(), back_inserter(c));
c) copy(c.begin(), c.end(), inserter(v,v.end()));
d) copy(c.begin(), c.end(), back_inserter(v));

*/

#include <iostream>
#include <string>
#include <vector>
#include <set>

using std::string;
using std::multiset;
using std::vector;
using std::cout;
using std::endl;

multiset<string> c {"Jayaram", "Programmer", "Writer", "Visionary", "Creative"};
vector<string> v {"Jayaram", "Programmer", "Writer", "Visionary", "Creative"};

int main()
{
    //a) copy(v.begin(), v.end(), inserter(c, c.end())); // multiset container is the destination
    //b) copy(v.begin(), v.end(), back_inserter(c)); // multiset container is the destination
    //c) copy(c.begin(), c.end(), inserter(v,v.end())); // Vector is the destination
    copy(c.begin(), c.end(), back_inserter(v)); // Vector is the destination
    

    cout << "Printing contents of the vector: " << endl;
    for (auto &w : v)
    {
        cout << w << endl;
    }
    cout << endl;
    cout << "Printing contents of multiset container: " << endl;
    for (auto &w : c)
    {
        cout << w << endl;
    }

    return 0;
}

/*
a) inserter function can be called to add elements to a multiset container
b) back_inserter can only be called on a container with push_back method such as vector, deque and list
and not a multiset container; thus this is illegal.
c) inserter function can be called to add elements to a vector
d) back_inserter can also be called on a vector since it has the push_back method.
*/