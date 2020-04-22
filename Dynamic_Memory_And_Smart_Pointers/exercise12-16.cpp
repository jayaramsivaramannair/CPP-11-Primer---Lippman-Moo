/*
Compilers don't always give easy-to-understand error messages if we attempt to copy or assign a unique_ptr.
Write a program that contains these errors to see how your program diagnoses them.

*/

#include <iostream>
#include <memory>
#include <string>

using std::unique_ptr;
using std::string;
using std::cout;
using std::endl;

unique_ptr<string> p1(new string("Stegosaurus"));


int main()
{
    //unique_ptr<string>p2(p1);
    /*
    Error Message being produced:
    call to implicitly-deleted copy constructor of 'unique_ptr<std::__1::string>' (aka
      'unique_ptr<basic_string<char, char_traits<char>, allocator<char> > >')
    unique_ptr<string>p2(p1);
    */
   unique_ptr<string>p2(p1.release()); // Ownership of the object is transferred from p1 to p2.
   cout << *p2 << endl;
   unique_ptr<string> p3;
   //p3 = p2;
   /*
   Error Message being produced:
   object of type 'std::__1::unique_ptr<std::__1::basic_string<char>,
      std::__1::default_delete<std::__1::basic_string<char> > >' cannot be assigned because its copy assignment operator is
      implicitly deleted
   */
   p3.reset(p2.release()); // Ownership of the object is now transferred from p2 to p3.
   cout << *p3 << endl;

   return 0;
}