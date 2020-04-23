/*
Rewrite the program on page 481 using an allocator
Read strings from standard input and allocate them using allocator class.
*/

#include <iostream>
#include <memory>
#include <string>

using std::allocator;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    allocator<string> alloc;
    size_t n = 5;
    string s;
    auto const p = alloc.allocate(n);
    auto q = p;

    cout << "Input " << n << " strings:" << endl;
    while (q != p + n)
    {
        cin >> s;
        alloc.construct(q++, s);
    }

    q = p; // Reset Q to make it point to the first constructed element.

    while (q != p + n) 
    {
        cout << *q << " ";
        q++;
    }
    cout << endl;

    return 0;
}