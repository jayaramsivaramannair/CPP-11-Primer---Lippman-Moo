/*
 * Write a class named Person that represents the name and address of a person.
 * Use a string to hold each of these elements. Subsequent exercises will incrementally add features to this class
 * Also, provide operators in the Person class to return the name and address. Should these functions be const?
 *
 * Add operations to read and print (non-member class-related functions) Person objects to the code you wrote
 * for the exercises in Sec. 7.1.2 (pg. 260)
 */

#include <iostream>
#include <string>

using std::string;
using std::istream;
using std::ostream;

struct Person {
    string print_name() const {return name; };
    string print_address() const {return address;};

    string name;
    string address;
};

//Read name and address into an instance of a person object
istream &read(istream &is, Person &item)
{
    is >> item.name >> item.address;
    return is;
}

//Print name and address from an instance of a person object
ostream &print(ostream &os, const Person &item)
{
    os << item.name << " " << item.address;
    return os;
}

int main()
{

    return 0;
}

/*
 * print_name and print_address member functions of the Person class must be const as it will
 * only allow these member functions to read but not write to the data members of the object on which it is called
 *
 * read function defines its Person parameter as a plain reference since it reads information into data members
 * of the person object and thereby changing it. Thus, Person parameter cannot be defined as a reference to const.
 *
 * print function defines its Person parameter as a reference to const since it merely reads current information
 * in data members of the person object and does not intend to change it.
 */