/*
 * Write a class named Person that represents the name and address of a person.
 * Use a string to hold each of these elements. Subsequent exercises will incrementally add features to this class
 * Also, provide operators in the Person class to return the name and address. Should these functions be const?
 */

#include <iostream>
#include <string>

using std::string;

struct Person {
    string print_name() const {return name; };
    string print_address() const {return address;};

    string name;
    string address;
};

int main()
{

    return 0;
}

/*
 * print_name and print_address member functions of the Person class must be const as it will
 * only allow these member functions to read but not write to the data members of the object on which it is called
 */
