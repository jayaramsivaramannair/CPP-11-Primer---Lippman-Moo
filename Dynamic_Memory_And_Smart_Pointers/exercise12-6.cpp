/*
Write a function that returns a dynamically allocated vector of ints.
Pass that vector to another function that reads the standard input to give values to the elements.
Pass the vector to another function to print the values that were read. Remember to delete the
vector at the appropriate time
*/

#include <iostream>
#include <memory>
#include <vector>

using std::vector;
using std::cout;
using std::endl;
using std::cin;

vector<int>* return_vector() // Returns a dynamically allocated vector of ints.
{
    return new vector<int>;
}

void fill_elements(vector<int> *pvi) // Fill the vector with elements from standard input
{
    int i = 0;
    cout << "Enter Integers to fill a vector<int>: " << endl;
    while (cin >> i)
    {
        (*pvi).push_back(i);
    }
}

void print_elements(vector<int> *pvi) //Prints the vector elements.
{
    auto biter = (*pvi).begin();
    cout << "Printing vector elements: " << endl;

    while (biter != (*pvi).end())
    {
        cout << *biter << " ";
        biter++;
    }
    cout << endl;
}

vector<int> *pvi = nullptr;

int main()
{
    bool st = true;
    
    pvi = return_vector();
    cout << "Memory address for pvi: " << pvi << endl;
    fill_elements(pvi);
    print_elements(pvi);
    
    delete pvi;

    cout << "PRINTING ELEMENTS AFTER DELETE" << endl;
    print_elements(pvi);

    cout << "Memory address for pvi: " << pvi << endl;
    cout << "pvi is a dangling pointer as it still refers to a"
    << " memory which no longer points to an object!" << endl;

    return 0;
}