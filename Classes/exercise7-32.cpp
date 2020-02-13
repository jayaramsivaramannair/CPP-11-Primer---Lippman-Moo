/*
 * Define your own versions of Screen and Window_mgr in which clear is a member of Window_mgr
 * and a friend of Screen.
 */

#include <iostream>
#include <vector>
#include <string>

using std::string;
using std::cout;
using std::endl;
using std::vector;

class Screen {
    // Window_mgr members can access the private parts of class Screen
    friend class Window_mgr;
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

class Window_mgr {
public:
    // location ID for each screen on the window
    using ScreenIndex = vector<Screen>::size_type;
    // reset the Screen at the given position to all blanks
    void clear(ScreenIndex);

private:
    vector<Screen> screens{Screen(24,80, '#')};
};

void Window_mgr::clear(ScreenIndex i)
{
    // s is a reference to the Screen we want to clear
    Screen &s = screens[i];
    // reset the contents of that Screen to all blanks
    s.contents = string(s.height * s.width, ' ');
}

int main()
{


    return 0;
}