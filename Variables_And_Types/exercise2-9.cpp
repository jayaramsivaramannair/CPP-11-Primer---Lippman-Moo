#include <iostream>

int main()
{
    int i = 3.14;
    // The fractional part will be truncated and i will be initialized to 3 since i is of type int
    std::cout << i << std::endl;

    //int j = {3.14}; /*Illegal*/
    // List initializers cannot be used for built-in types if it leads to loss of information
    // Compiler Error : type 'double' cannot be narrowed to 'int' in initializer list
    //std::cout << j << std::endl;

    int input_value;
    std::cout << "Input a value: ";
    // variable input_value cannot be defined when the data is being read into it
    // variable input_value must be defined beforehand before value is read into it
    std::cin >> input_value;
    std::cout << "Input value is " << input_value << std::endl;

    double salary, wage;
    salary = wage = 9999.99;
    // double salary = wage = 9999.99 is illegal

    std::cout << "Salary: " << salary << "; Wage: " << wage << std::endl;

    return 0;
}