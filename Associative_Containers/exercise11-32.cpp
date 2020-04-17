/*
Define a multimap of authors and their works then write a program to print the list of authors
and their works alphabetically
*/

#include <map>
#include <iostream>
#include <string>
#include <set>

using std::cout;
using std::endl;
using std::multimap;
using std::string;

multimap<string, string> authors_works =
{
    {"James Joyce", "Dubliners"},
    {"Shakespeare", "Macbeth"},
    {"Russell Hoban", "Turtle Diary"},
    {"Shakespeare", "Comedy of Errors"},
    {"Conrad Barksi", "Land of Lisp"},
    {"Nassim Nicholas Taleb", "Fooled by Randomness"},
    {"Matt Ridley", "How Innovation Works"},
    {"Nassim Nicholas Taleb", "Black Swan"},
    {"Russell Hoban", "Medusa Frequency"},
    {"Nassim Nicholas Taleb", "Skin in the Game"},
    
};

int main()
{
    multimap<string,string>::iterator biter = authors_works.begin();
    multimap<string,string>::iterator eiter = authors_works.end();
    multimap<string,string>::iterator preiter = authors_works.end();

    for (; biter != eiter; biter++)
    {
        string search_item(biter->first);

        if (search_item == preiter->first) // If the author and his works have been printed before, then skip
        {
            continue;
        }

        cout << "Author: " << biter->first;
        cout << ", Works: ";
        for (auto pos = authors_works.equal_range(search_item);
        pos.first != pos.second; ++pos.first)
        {
            cout << pos.first->second << ", ";
        }

        preiter = biter; //Save the current author to compare with later values
        cout << endl;
    }

    return 0;
}