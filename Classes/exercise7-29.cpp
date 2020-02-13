/*
What would happen in the previous exercise if the return type of move, set, and display
was Screen rather than Screen&?

Revise your Screen class so that move, set, and display functions return Screen and check
your predictions
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
    Screen move(pos r, pos c);
    Screen set(char);
    Screen set(pos, pos, char);
    // Returns Screen instead of Screen&
    Screen display(std::ostream &os)
    {
        do_display(os);
        return *this;
    }
    
    // Returns Screen instead of Screen&
    const Screen display(std::ostream &os) const
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

// Returns Screen instead of Screen&
inline Screen Screen::move(pos r, pos c)
{
    pos row = r * width;
    cursor = row + c;
    return *this;
}

// Returns Screen instead of Screen&
inline Screen Screen::set(char c)
{
    contents[cursor] = c;
    return *this;
}

// Returns Screen instead of Screen&
inline Screen Screen::set(pos r, pos col, char ch)
{
    contents[r*width + col] = ch;
    return *this;
}



int main()
{
    Screen myScreen(5,5,'X'); //my Screen is a non-const object
    
    //If move, set and display functions return Screen instead of Screen&,
    // a copy of myScreen is displayed.
    myScreen.move(4,0).set('#').display(cout); 
    
    // Any changes made by move and set function will be made to the copy of myScreen
    // and not the original myScreen object
    // Output will be XXXXXXXXXXXXXXXXXXXX#XXXX
    cout << "\n"; 
    
    // a copy of myScreen object (without foregoing changes by set and move) is displayed.
    //Output will be XXXXXXXXXXXXXXXXXXXXXXXXX
    myScreen.display(cout); 
    cout << "\n";

    return 0;
}