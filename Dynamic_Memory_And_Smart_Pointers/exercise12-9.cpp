/*
Explain what happens in the following code:

int *q = new int(42), *r = new int(100);
r = q;

auto q2 = make_shared<int>(42), r2 = make_shared<int>(100);
r2 = q2;
*/

#include <iostream>
#include <memory>

using std::make_shared;
using std::cout;
using std::endl;

int main()
{
    int *q = new int(42), *r = new int(100);
    cout << "r before assignment: " << *r << endl; //Prints 100
    cout << "q before assignment: " << *q << endl; // Prints 42
    
    r = q; // r and q now point to the same dynamically allocated object.

    cout << "r after assignment: " << *r << endl; // Prints 42
    cout << "q after assignment: " << *q << endl; // Prints 42


    auto q2 = make_shared<int>(42), r2 = make_shared<int>(100);
    cout << "r2 before assignment: " << *r2 << endl; // Prints 100
    cout << "q2 before assignment: " << *q2 << endl; // Prints 42

    r2 = q2; // r2 and q2 now point to the same dynamically allocated object.

    cout << "r2 after assignment: " << *r2 << endl; // Prints 42
    cout << "q2 after assignment: " << *q2 << endl; // Prints 42

    return 0;
}