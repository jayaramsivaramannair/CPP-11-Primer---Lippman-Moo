/* Write a function to print the contents of an istringstream object */


#include <iostream>
#include <sstream>

using std::istream;
using std::istringstream;
using std::cout;
using std::cin;
using std::string;

void print_string_elements(std::istream& str)
{
    istringstream line;
    string word, lines;
    while(getline(str, lines))
    {
        line.str(lines);
        while(line >> word)
            cout << word << " ";
        cout << "\n";
        line.clear();
    }
}

int main()
{
    cout << "Start Inputting Strings: " << "\n";
    print_string_elements(cin);
}
