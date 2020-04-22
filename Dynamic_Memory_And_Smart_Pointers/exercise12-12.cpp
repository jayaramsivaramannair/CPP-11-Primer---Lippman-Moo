/*
Using the declarations of p and sp explain each of the following calls to process.
If the call is legal, explain what it does. If the call is illegal, explaing why:

auto p = new int();
auto sp = make_shared<int>();

a) process(sp);
b) process(new int());
c) process(p);
d) process(shared_ptr<int> (p));

*/

#include <iostream>
#include <memory>

using std::shared_ptr;
using std::make_shared;
using std::cout;
using std::endl;

void process(shared_ptr<int> ptr)
{
    cout << *ptr << endl;
}

auto p = new int();
auto sp = make_shared<int>();

int main()
{
    process(sp);
    //process(new int()); //Illegal as the parameter expected is of type shared_ptr<int>
    //process(p); // Illegal; no implicit conversion as the parameter type expected is shared_ptr<int>
    process(shared_ptr<int>(p));
    return 0;
}