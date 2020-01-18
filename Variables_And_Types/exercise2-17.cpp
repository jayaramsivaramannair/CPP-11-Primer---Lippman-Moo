#include <iostream>

int main()
{
    int i, &ri = i;
    // Since ri is bound to the object i. Any value we assign to ri is indeed assigned to i,
    // which is the object ri is bound to
    i = 5; ri = 10;  // ri = 10 can be interpreted as i = 10;
    std::cout << i << " " << ri << std::endl; // Print 10 <space> 10
    return 0;
}