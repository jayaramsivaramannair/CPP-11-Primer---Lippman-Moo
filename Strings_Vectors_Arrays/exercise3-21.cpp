/*
* A program to print the size and contents of vectors shown below
* Use iterators to print vector's contents
*/

#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
    //a Creates an empty vector
    vector<int> v1;
    cout << "Size: " << v1.size() << endl;
    for (auto it = v1.begin(); it != v1.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    //b Creates a vector with 10 elements initialized to zero
    vector<int> v2(10);
    cout << "Size: " << v2.size() << endl;
    for (auto it = v2.begin(); it != v2.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    //c Creates a vector with 10 elements each initialized to the value '42'
    vector<int> v3(10, 42);
    cout << "Size: " << v3.size() << endl;
    for (vector<int>::iterator it = v3.begin(); it != v3.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    //d Creates a vector with 1 element initialized to the value '10'
    vector<int> v4{10};
    cout << "Size: " << v4.size() << endl;
    for (auto it = v4.begin(); it != v4.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    //e Creates a vector with 2 elements containing the values '10' and '42'
    vector<int> v5{10,42};
    cout << "Size: " << v5.size() << endl;
    for (auto it = v5.begin(); it != v5.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    //f Creates a vector with 10 string elements with each being an empty string
    vector<string> v6{10};
    cout << "Size: " << v6.size() << endl;
    for (auto it = v6.begin(); it != v6.end(); it++)
    {
        cout << "Empty String: " << *it << endl; // Prints an empty string
    }

    //g Creates a vector with 10 string elements with each string saying "hi"
    vector<string> v7{10, "hi"};
    cout << "Size: " << v7.size() << endl;
    for (auto it = v7.begin(); it != v7.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}


