/*
Write a program that uses stable_sort and isShorter to sort a vector passed
to your version of elimDups. Print the vector to verify that your program is correct.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;
using std::string;
using std::cout;
using std::endl;

vector<string> words{"the","quick", "quick", "quick", "red", "red", "fox", "jumps", "jumps",
"jumps", "jumps", "over", "the", "the", "the", "the", "the", "slow", "red", "red", "red", "red",
"turle"};

void elimDups(vector<string> &words)
{
    cout << "Contents before sorting: " << endl;
    for (auto elem : words)
    {
        cout << elem << " ";
    }
    cout << endl;

    sort(words.begin(), words.end());
    cout << "Contents after sorting: " << endl;
    for (auto elem : words)
    {
        cout << elem << " ";
    }
    cout << endl;

    auto end_unique = unique(words.begin(), words.end());
    cout << "Contents after unique function(): " << endl;
    for (auto elem : words)
    {
        cout << elem << " ";
    }
    cout << endl;

    words.erase(end_unique, words.end());
    cout << "Contents after erasure of non-unique elements: " << endl;
    for (auto elem : words)
    {
        cout << elem << " ";
    }
    cout << endl;
}

bool isShorter(const string &s1, const string &s2)
{
    return s1.size() < s2.size();
}

int main()
{
    elimDups(words);
    stable_sort(words.begin(), words.end(), isShorter);
    cout << "Contents after stable_sort algorithm: " << endl;
    for (auto elem: words)
    {
        cout << elem << " ";
    }
    cout << endl;
    return 0;
}