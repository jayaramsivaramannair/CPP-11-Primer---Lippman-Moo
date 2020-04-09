/*
Write a program to explore how vectors grow in the library you use.
*/

#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int main()
{
    vector<int> ivec;
    
    for(int ix = 0; ix < 10; ix++)
    {
        ivec.push_back(ix);
    }

    cout << "Vector Size: " << ivec.size() << ", ";
    cout << "Vector Capacity: " << ivec.capacity() << endl;

    cout << endl;

    for (int ix = 10; ix < 20; ix++)
    {
        ivec.push_back(ix);
    }
    cout << "Vector Size: " << ivec.size() << ", ";
    cout << "Vector Capacity: " << ivec.capacity() << endl;

    cout << endl;

    for (int ix = 20; ix < 70; ix++)
    {
        ivec.push_back(ix);
    }

    cout << "Vector Size: " << ivec.size() << ", ";
    cout << "Vector Capacity: " << ivec.capacity() << endl;

    return 0;
}


/*
The above from the code above is as below: 

Vector Size: 10, Vector Capacity: 16

Vector Size: 20, Vector Capacity: 32

Vector Size: 70, Vector Capacity: 128

This clearly shows the the vector capacity doubles every time and always reserves some extra space
which is more than what the vector currently requires to hold all the elements.
*/