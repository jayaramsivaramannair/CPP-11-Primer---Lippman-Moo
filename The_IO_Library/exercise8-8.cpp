/* Write a function to open a file, read each line from the file then appending the line back into
the same file */


#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using std::string;
using std::ofstream;
using std::ifstream;
using std::cout;
using std::endl;

void Append(string filename)
{
    ifstream f_in(filename);
    ofstream f_out(filename, ofstream::app);
    string line;

    if(f_in)
    {
        while (!(f_in.eof()))
        {
            getline(f_in,line);
            f_out << "\n";
            f_out << line;
        }
    }
    f_out << "\n";
    f_out.close();
}

int main()
{
    Append("profession.txt");
    ifstream f_in_out("profession.txt");
    string line;
    while(getline(f_in_out,line))
    {
        cout << line << "\n";
    }
}