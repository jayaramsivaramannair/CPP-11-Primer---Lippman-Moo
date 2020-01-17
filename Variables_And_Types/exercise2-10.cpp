#include <iostream>

std::string global_str;
int global_int;

int main()
{
    int local_int;
    std::string local_str;

    if(global_str == "") /* By default, global_str of the string class is initialized with an empty string */
        std::cout << "global_str is an empty string." << std::endl;

    if (global_int == 0) /* By default, global_int of type int is initialized to zero since defined outside function */
        std::cout << "global_int is default initialized to zero" << std::endl;

    if (local_int != 0) /* By default, local_int of type int is undefined since defined inside a function */
        std::cout << "local_int is undefined." << std::endl;

    if(local_str == "") /* By default, local_str of the string class is initialized with an empty string */
        std::cout << "local_str is an empty string." << std::endl;


    return 0;
}