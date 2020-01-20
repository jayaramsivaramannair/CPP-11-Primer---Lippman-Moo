/*
*A Program to read a sequence of ints from cin and store
*those values in a vector
*/

#include <iostream>
#include <vector>

using std::cin;
using std::vector;
using std::cout;
using std::endl;

int main()
{
    vector<int> ivec;
    int number_of_elements = 0;
    int element = 0;
    cout << "How many elements you want to enter? ";
    cin >> number_of_elements;

    cout << "Enter " << number_of_elements << " integers: " << endl;

    while (number_of_elements > 0)
    {
        cin >> element;
        ivec.push_back(element);
        number_of_elements--;
    }

    return 0;
}