/*
*********************Includes exercise 12-11 as well.*****************

Explain whether the following call to the process function defined on page 464 is correct.
If not, how would you correct the call?

shared_ptr<int> p(new int(42))
process(shared_ptr<int>(p));

What would happen if we called process as follows?

process(shared_ptr<int>(p.get()));
*/

#include <iostream>
#include <memory>

using std::shared_ptr;
using std::cout;
using std::endl;

void process(shared_ptr<int> ptr)
{
    cout << *ptr << endl;
}

int main()
{
    shared_ptr<int> p (new int(42));
    //cout << *p << endl;
    //process(shared_ptr<int>(p)); // process function can be alternatively called by directly passing p.
    process(p);
    process(shared_ptr<int>(p.get())); 
    // Using the get function while passing the pointer will delete the ptr by end of the function block
    // and thus an error is produced.

    return 0;
}