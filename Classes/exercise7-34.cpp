#include <iostream>
#include <string>

using std::string;

int height;
class Screen {
private:
    pos cursor = 0;
    pos height = 0, width = 0;
public:
    void dummy_fcn(pos height)
    {
        cursor = width * height;
    }
    typedef string::size_type pos;
};

int main()
{

    return 0;
}

/*
 * Definition of type names should usually appear at the beginning of a class
 * Or else usage of a type name by class members before being seen will produce compilation errors.
 */