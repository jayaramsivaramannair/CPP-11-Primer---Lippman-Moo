/*
 * Add appropriate constructors to the Person class.
 */

#include <iostream>
#include <string>


using std::cout;
using std::string;
using std::istream;
using std::ostream;
using std::endl;

struct Person {
    Person() = default;
    Person(const string &n, const string &a) : name(n), address(a) {}
    string print_name() const {return name; };
    string print_address() const {return address;};

    string name = "Please enter a name";
    string address = "Please enter an address";
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
    Person tom;
    cout << tom.name << endl;
    cout << tom.address << endl;

    Person harry("John Jay", "235 Nowhere Avenue, Apt Infinity, Mordor XXXXXX");
    cout << harry.name << endl;
    cout << harry.address << endl;

    return 0;
}