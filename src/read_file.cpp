#include <fstream>
#include <iostream>

void ReadFile(const std::string filename)
{
    std::ifstream inf{ filename };

    if (!inf)
    {
        std::cerr << "File could not be opened for reading!";
    }

    while (inf)
    {
        std::string strInput;
        std::getline(inf, strInput);
        std::cout << strInput << "\n";
    }
}

int main()
{
    std::string myFile = "testfile.txt";
    // how to wrap and check for exception ?
    ReadFile(myFile);
    
    return 0;

}