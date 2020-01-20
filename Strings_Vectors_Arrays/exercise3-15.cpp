/*
* A Program to read a sequence of strings from cin and then
* store those values in a vector
*/

#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::vector;
using std::string;
using std::cout;
using std::endl;

int main()
{
    vector<string> svec;
    int number_of_elements = 0;
    string string_element;
    cout << "How many individual strings you want to enter? ";
    cin >> number_of_elements;

    cout << "Enter " << number_of_elements << " Strings: " << endl;

    while (number_of_elements > 0)
    {
        cin >> string_element;
        svec.push_back(string_element);
        number_of_elements--;
    }

    return 0;
}