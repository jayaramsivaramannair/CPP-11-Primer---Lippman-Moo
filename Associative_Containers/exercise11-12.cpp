/*
Write a program to read a sequence of strings and ints, storing each into a pair. 
Store the pairs in a vector using curly braces to create a pair and then directly push them into the vector.
*/

#include<iostream>
#include<utility>
#include<vector>
#include<string>

using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::pair;
using std::cin;

vector<pair<string,int>> vecpair;
int i;
string word;
char response;

int main()
{
    cout << "Enter a word followed by a number: ";
    cin >> word >> i;
    vecpair.push_back({word, i});
    while (true)
    {
        cout << "Continue? (Y or N)" << endl;
        cin >> response;
        if (response == 'N' || response == 'n')
        {
            break;
        }
        cout << "Enter a word followed by a number: ";
        cin >> word >> i;
        vecpair.push_back({word, i});
    }

    for (const auto &pair : vecpair)
    {
        cout << "{" << pair.first << ", " << pair.second << "}" << endl;
    }

    return 0;
}