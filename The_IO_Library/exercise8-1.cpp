#include <iostream>

std::istream& print_stream(std::istream& str)
{
    int ival = 0;
    while(str >> ival)
    {
        if (str.eof())
        {
            str.clear();
            break;
        }
        std::cout << ival << std::endl;
    }
    return str;
}

int main()
{
    print_stream(std::cin);
    
}


