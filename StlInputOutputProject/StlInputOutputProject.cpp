#include <iostream>
#include <fstream>


int main()
{
    std::fstream file;

    /*file.open("file.txt", std::ios::out);
    std::string str = "Hello world";
    file.write(str.c_str(), str.length());
    file.seekp(-6, std::ios::end);
    file.put('!');

    file << "Hello people";
    file.close();*/

    file.open("file.txt", std::ios::in);
    
    /*std::string sout(10, ' ');
    file.read(&sout[0], 10);
    std::cout << sout << "\n";
    std::cout << file.get() << "\n";

    std::string sout2;
    file >> sout2;
    std::cout << sout2 << "\n";*/

    while (!file.eof())
    {
        std::string buffer(1024, ' ');
        file.getline(&buffer[0], 1024);
        buffer.resize(file.gcount());
        std::cout << buffer << "\n";
        /*file >> buffer;
        std::cout << buffer;
        if (buffer == "\n")
            std::cout << "\n";*/
    }

    file.close();
    return 0;
}
