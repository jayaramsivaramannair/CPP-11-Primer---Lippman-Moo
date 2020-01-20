/*
* A Program to print the size and contents of vectors in each instance show below
*
*/

#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::cout;
using std::endl;

int main()
{
    //a
    vector<int> v1; //Empty vector with 0 elements
    cout << v1.size() << endl;

    //b
    vector<int> v2(10); // Vector with ten elements initialized with the value '0'
    for (auto i : v2)
        cout << i << " ";
    cout << endl;

    //c
    vector<int> v3(10, 42); // Vector with ten elements, each element initialized with the value '42'
    for (auto i : v3)
        cout << i << " ";
    cout << endl;

    //d
    vector<int> v4{10}; // List initializer; Vector with one element containing the value '10'
    for (auto i : v4)
        cout << i << " ";
    cout << endl;

    //e
    vector<int> v5{10,42}; // List initializer; Vector with 2 elements containing the value 10 and 42
    for (auto i : v5)
        cout << i << " ";
    cout << endl;

    //f
    vector<string> v6{10}; // List initiliazer; Vector with 10 elements, each initiliazed with an empty string
    for (auto i : v6)
        cout << i << endl;
    cout << endl;

    //g
    vector<string> v7(10, "hi"); //List initializer; Vector with 10 elements, each initialized with "hi"
    for (auto i : v7)
        cout << i << " ";
    cout << endl;

    return 0;
}