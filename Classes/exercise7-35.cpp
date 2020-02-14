/*
* Explain the following code, indicating which definition of Type or initVal is used for 
* each use of those names. Say how would you fix any errors.
*/


#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

typedef string Type;
Type initVal() {return "Global String";}
class Exercise {
public:
    //Type can be redefined inside class as Global 'Type' not yet used by any class members.
    typedef double Type; 
    Type setVal(Type); // Returns and takes a parameter of type 'Double' as Type found inside the class
    Type initVal() {return 20.0;} // Returns a parameter of type 'Double' as Type found inside the class first
private:
    int val;
};

Exercise::Type Exercise::setVal(Type parm)
{
    val = parm + initVal(); // Parm is the parameter provided and initVal() is used from inside the class.
    return val;
}


int main()
{
    Exercise ex;
    cout << initVal() << endl;
    cout << ex.initVal() << endl;
    cout << ex.setVal(25.0) << endl;

    return 0;
}