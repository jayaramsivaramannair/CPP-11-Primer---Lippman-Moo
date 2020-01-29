/*
 * iter is of vector<string>::iterator type
 * Explain the legality of the following expressions
 */

#include <iostream>
#include <vector>
#include <string>

using std::string;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<string>svec{"Programmer", "Writer", "Coder", "Technologist", "Fictionalist"};
    vector<string>::iterator iter = svec.begin();

    //a Legal; Prints the first string in the vector which is "Programmer"
    cout << *iter++ << endl;

    //b Illegal; result of dereference is a string which cannot be incremented
    //cout << (*iter)++ << endl;

    //c IlLegal; Dot operator has a higher precedence thus illegal as iter does not have a member called empty()
    // putting a parenthesis around *iter will make this expression legal
    //cout << *iter.empty() << endl;

    //d Legal; Using the arrow operator to access empty() member of the element that iter points to which is a string
    cout << iter->empty() << endl; //Prints '0' to signify the boolean value false

    //e Illegal as an increment to increment the value which is a string; associativity is right to left
    //cout << ++*iter << endl;

    //f Legal as the expression validly combines postfix increment and arrow operator
    cout << iter++->empty() << endl;

    return 0;
}