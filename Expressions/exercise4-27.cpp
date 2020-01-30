/*
 * What is the result of each of the following expressions?
 */

#include <iostream>

using std::cout;
using std::endl;

int main()
{
   unsigned long ul1 = 3, ul2 = 7;

   //bit pattern for 3
   //00000000 00000000 00000000 00000011

   //bit pattern for 7
   //00000000 00000000 00000000 00000111

   //Bitwise AND Operator
   cout << (ul1 & ul2) << endl; //Prints 3

   //Bitwise OR Operator
   cout << (ul1 | ul2) << endl; //Prints 7

   //Logical AND Operator
   cout << (ul1 && ul2) << endl; //Evaluates to 1 since both ul1 and ul2 hold non-zero values

   //Logical OR Operator
   cout << (ul1 || ul2) << endl; // Evaluates to 1 as either ul1 or ul2 hold non-zero values

}