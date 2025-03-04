#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "Usage: ./replace filename s1 s2" << std::endl;
        return 1;
    }

    std::string filename = av[1];
    std::size_t pos = filename.find_last_of(".");
    if (pos != std::string::npos)
        filename = filename.substr(0, pos);

    std::string s1 = av[2];
    std::string s2 = av[3];
    std::string outputFilename = filename + ".replace";
    std::ifstream input;
    std::ofstream output;
    std::string line;
    
    input.open(av[1]);
    if (!input.is_open())
    {
        std::cout << "Error: could not open file" << std::endl;
        return 1;
    }

    output.open(outputFilename.c_str());
    if (!output.is_open())
    {
        std::cout << "Error: could not open file" << std::endl;
        return 1;
    }

    while (std::getline(input, line))
    {
        std::size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos)
        {
            line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
            pos += s2.length();
        }
        if (!input.eof())
            output << line << std::endl;
        else
            output << line;
    }

    input.close();
    output.close();
    return 0;
}