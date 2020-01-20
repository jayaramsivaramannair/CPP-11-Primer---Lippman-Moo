/*
* Program to read a set of integers into vector
* Print the sum of each pair of adjacent elements
* Alternatively, print the sum of the first and last elements followed by the sum of second and second to last
* and so on
*/

#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int number_of_integers = 0;
    int integer = 0;
    int sum = 0;
    vector<int> ivec;

    cout << "Enter number of integers you want to be read: " << endl;
    cin >> number_of_integers;

    cout << "Start entering integers......" << endl;

    while (number_of_integers > 0)
    {
        cin >> integer;
        ivec.push_back(integer);
        number_of_integers--;
    }

    /* Prints the sum of each pair of adjacent elements in the vector */
    for(decltype(ivec.size()) pair_first = 0, pair_second = 1;
        pair_second < ivec.size(); pair_first += 2, pair_second += 2)
    {
        sum += ivec[pair_first]; // First element of each pair
        sum += ivec[pair_second]; // Second element of each pair
        cout << "sum of each pair of adjacent elements is : " << sum << endl;
        sum = 0; // Re-initialize the sum variable to add elements in the next pair
    }

    cout << endl;

    /* For each i, prints the sum of value at index i and  at index (n - i) */
    for(decltype(ivec.size()) pair_first = 0, pair_second = ivec.size() - 1;
        pair_second > pair_first; pair_first += 1, pair_second -= 1)
    {
        sum += ivec[pair_first]; // Element at index - i
        sum += ivec[pair_second]; // Element at index - svec.size() - i
        cout << "sum of " << ivec[pair_first] << " and "
             << ivec[pair_second] << " is " << sum << endl;
        sum = 0; // Re-initialize the sum variable to add elements in the next pair
    }

    return 0;
}
