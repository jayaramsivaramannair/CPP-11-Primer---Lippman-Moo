/*
 * Explain the conversions which take place in case of the following expressions
 */


#include <iostream>

using std::endl;
using std::cout;

int main()
{
   float fval = 6.789;
   int ival = 3;
   char cval = 'a';
   double dval = 0.00;

   // Since fval is non-zero, the evaluation result is true and any statements within braces
   // will be exectuted
   if (fval) {
     cout << "fval is non-zero" << endl;
   }

   //ival is converted to float and then the addition result is converted to double before assignment
   dval = fval + ival;
   cout << dval << endl;

   // cval is promoted to int, multiplied with ival and the result is converted to double before added to dval
   cout << (dval + ival * cval) << endl;

   return 0;
}