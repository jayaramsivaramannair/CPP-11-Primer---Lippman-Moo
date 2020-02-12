/*
* Indicate which members of your person class would you declare as pulic
* and which you would declare as private. Explain your choice.
*/

#include <iostream>
#include <string>


using std::cout;
using std::string;
using std::istream;
using std::ostream;
using std::endl;

class Person {
    friend istream &read(istream &is, Person &item);
    friend ostream &print(ostream &os, const Person &item);

public:
    Person() = default;
    Person(const string &n, const string &a) : name(n), address(a) {}
    Person(istream&);
    string print_name() const {return name; };
    string print_address() const {return address;};
private:
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

Person::Person(istream &is)
{
    read(is, *this);
}

int main()
{
    const Person jay("jay", "235 Access Ave, Public Square, Nowhere Land");
    print(cout, jay);
    cout << endl;

    const Person seema;
    print(cout, seema);
    cout << endl;


    return 0;
}

/*
All the constructions within Person Class and member functions such as print_name() & print_address() will
be defined after the public label and thus made part of the interface.

Private label will be used inside the Person Class to encapsulate/hide data members namely name and address
*/