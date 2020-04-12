/*
Write your own version of the biggies function using lambdas
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

void biggies(vector<string> &words, vector<string>::size_type sz)
{
    elimDups(words);
    stable_sort(words.begin(), words.end(),
    [](const string &a, const string &b) {return a.size() < b.size();});
    cout << "Contents after stable_sort algorithm: " << endl;
    for (auto elem : words)
    {
        cout << elem << " ";
    }
    cout << endl;
    //Applying find_if algorithm
    auto wc = find_if(words.begin(), words.end(),
    [sz](const string &a) {return a.size() >= sz; });
    cout << "Contents of length 4 characters or more: " << endl;
    //Applying for_each algorithm
    for_each(wc, words.end(),
    [] (const string &s) {cout << s << " ";});
    cout << endl;
}

int main()
{
    biggies(words, 4);
    return 0;
}