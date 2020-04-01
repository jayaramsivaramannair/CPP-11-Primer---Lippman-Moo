#include <iostream>
#include <fstream>

int main()
{
    std::fstream file("profession-2.txt");
    std::string word;
    while (file >> word)
    {
        std::cout << word << std::endl;
    }

}