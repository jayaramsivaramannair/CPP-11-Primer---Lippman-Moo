/*
Which of the following unique_ptr declarations are illegal or likely to result in subsequent
program error? Explain what the problem is with each one.

int ix = 1024, *pi = &ix, *pi2 = new int(2048);
typedef unique_ptr<int> IntP;

a) IntP p0(ix);
b) IntP p1(pi);
c) IntP p2(pi2);
d) IntP p3(&ix);
e) IntP p4(new int(2048));
f) IntP p5(p2.get());

*/

#include <iostream>
#include <memory>

using std::unique_ptr;
using std::cout;
using std::endl;
using std::make_shared;

int ix = 1024, *pi = &ix, *pi2 = new int(2048);
typedef unique_ptr<int> IntP;

int main()
{
    //IntP p0(ix); //Illegal as an int is being passed instead of a pointer to the int.
    //IntP p1((unique_ptr<int>(pi))); // Illegal as p1 is a unique_ptr and can only be initialized with a pointer returned by new
    IntP p2(pi2); // Legal as pi2 is a pointer returned by new.
    cout << *p2 << endl;
    //IntP p3(&ix); // Illegal as p3 is a unique ptr and can be initialized only with a pointer returned by new.
    IntP p4(new int(4082)); // Legal is initialized occurs with a pointer returned by new.
    cout << *p4 << endl;
    //IntP p5(p2.get()); //Illegal

    return 0;
}