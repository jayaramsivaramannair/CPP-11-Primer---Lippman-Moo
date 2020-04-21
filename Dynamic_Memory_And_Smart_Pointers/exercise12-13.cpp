/*
What happens if we execute the following code?

auto sp = make_shared<int>();
auto p = sp.get();
delete p;

*/

#include <iostream>
#include <memory>

using std::cout;
using std::endl;
using std::make_shared;
using std::shared_ptr;


int main()
{
    auto sp = make_shared<int>(); //Initialized with a nullptr
    auto p = sp.get(); // Caution: Never use get to initialize or assign to another smart pointer
    cout << "Before deletion: " << endl;
    cout << p << " & " << sp << endl;
    cout << "After deletion: " << endl;
    delete p; 
    cout << p << " & " << sp << endl;
}