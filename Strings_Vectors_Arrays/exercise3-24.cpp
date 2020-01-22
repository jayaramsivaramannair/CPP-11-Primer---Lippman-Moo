/* Using iterators
* Read a set of integers into a vector
* Print the sum of each pair of adjacent elements.
* Modify the program so that it prints the sum of the first and last elements
* followed by the sum of second and second-to-last and so on.
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

    /* Prints the sum of each pair of adjacent elements in the vector using iterators */
    for(auto it = ivec.begin(), it2 = ivec.begin() + 1;
        it2 < ivec.end(); it += 2, it2 += 2)
    {
        int sum = 0;
        sum += *it; // First element of each pair
        sum += *it2; // Second element of each pair
        cout << "sum of each pair of adjacent elements-" 
             << *it << " and " << *it2 << " is " << sum << endl;
    }

    cout << endl;

    /* Prints the sum of pair of corresponding elements at the beginning and at the end of the vector */
    for(auto it = ivec.begin(), it2 = ivec.end() - 1;
        it2 > it; it += 1, it2 -= 1)
    {
        int sum = 0;
        sum += *it; // Element at index - i
        sum += *it2; // Element at index - svec.size() - i
        cout << "sum of " << *it << " and "
             << *it2 << " is " << sum << endl;
    }

    return 0;
}
