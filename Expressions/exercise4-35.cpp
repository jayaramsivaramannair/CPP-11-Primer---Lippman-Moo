/*
 * Identify the implicit type conversions which occur in case of the following expressions
 */


#include <iostream>

using std::endl;
using std::cout;

int main()
{
 char cval;
 int ival = 2;
 unsigned int ui = 3;
 float fval = 0.0;
 double dval = 0.0;

 //a Character 'a' is promoted to int before adding 3 to it and then the character corresponding to 100 is
 // assigned to cval which is character 'd'
 cval = 'a' + 3;
 cout << cval << endl;

 // ival is converted to a float before multiplying and then the result is
 // subtracted from ui which is converted to unsigned int and then converting it to float before assigning it to fval
 fval = ui - ival * 1.0;
 cout << fval << endl;

 //ui converted to float before multiplication and then result is converted to double before assignment
 dval = ui * fval;
 cout << dval << endl;

 //ival is converted to float and then the result is converted to double before addition with dval
 // the result is converted to the corresponding character before assigned to cval
 cval = ival + fval + dval + 27;
 cout << cval << endl;

 return 0;
    
}