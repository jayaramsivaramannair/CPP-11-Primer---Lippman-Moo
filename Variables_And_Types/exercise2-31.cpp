#include <iostream>

int main()
{
    const int v2 = 0; // The declaration has top level const
    int v1 = v2; // While copying the const qualifier does not matter
    int *p1 = &v1;
    int &r1 = v1;
    int i;
    const int *p2 = &v2; // const qualifier is low level
    const int *const p3 = &i; // const on the right side is top level and const on the left side is low level
    const int &r2 = v2; // const qualifier is low level


    int &r2 = v2; // Illegal; cannot bind an ordinary int& to a const int object
    p1 = p2; // Illegal; p2 has a low-level const but p1 doesn't have
    p1 = p3; // Illegal; p3 has a low-level const but p1 doesn't have
    p2 = p1; //Legal; as p1 which does not have low-level const can be converted to const
    p2 = p3; // Legal; as both p2 and p3 have the same low-level const qualification


    return 0;
}