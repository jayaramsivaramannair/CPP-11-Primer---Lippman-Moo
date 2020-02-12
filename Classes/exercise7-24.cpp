/*
* Write your own version of the Screen Class.
* Give your Screen class three constructors: a default constructor, a constructor that takes values
* for height and width and initializes the contents to hold the given number of blanks; and a constructor
* that takes values for height, width, and a character to use as the contents of the screen.
*/

#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Screen {
public:
    using pos = string::size_type;
    Screen() = default;
    Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht * wd, ' ') {}
    Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c) {}
    string &print_contents() {return contents;}
private:
    pos cursor = 0;
    pos height = 0, width = 0;
    string contents;

};

int main()
{
    Screen screen1;
    Screen screen2(10, 20);
    Screen screen3(10, 20, '%');

    cout << "screen1 contents: " << screen1.print_contents() << endl;
    cout << "screen2 contents: " << screen2.print_contents() << endl;
    cout << "screen3 contents: " << screen3.print_contents() << endl;


    return 0;
}