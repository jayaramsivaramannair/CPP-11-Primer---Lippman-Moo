/*
Add the move, set, and display operations to your version of Screen. 
Test your class by executing the following code:

Screen myScreen(5,5,'X');
myScreen.move(4,0).set('#').display(cout);
cout << "\n";
myScreen.display(cout);
cout << "\n";
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
    Screen &move(pos r, pos c);
    Screen &set(char);
    Screen &set(pos, pos, char);
    Screen &display(std::ostream &os)
    {
        do_display(os);
        return *this;
    }
    
    const Screen &display(std::ostream &os) const
    {
        do_display(os);
        return *this;
    }
    string &print_contents() {return contents;}
private:
    pos cursor = 0;
    pos height = 0, width = 0;
    string contents;
    void do_display(std::ostream &os) const {os << contents;}
};

inline Screen &Screen::move(pos r, pos c)
{
    pos row = r * width;
    cursor = row + c;
    return *this;
}

inline Screen &Screen::set(char c)
{
    contents[cursor] = c;
    return *this;
}

inline Screen &Screen::set(pos r, pos col, char ch)
{
    contents[r*width + col] = ch;
    return *this;
}



int main()
{
    Screen myScreen(5,5,'X'); //my Screen is a non-const object
    myScreen.move(4,0).set('#').display(cout);
    cout << "\n";
    myScreen.display(cout);
    cout << "\n";
    
    return 0;
}