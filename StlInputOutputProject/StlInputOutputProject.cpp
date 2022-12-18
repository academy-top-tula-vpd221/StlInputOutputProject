#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <fstream>


int main()
{
    std::ofstream wfile;
    std::ifstream rfile;

    std::fstream file;

    /*file.open("file.txt", std::ios::out);
    std::string str = "Hello world";
    file.write(str.c_str(), str.length());
    file.seekp(-6, std::ios::end);
    file.put('!');

    file << "Hello people";
    file.close();*/

    //file.open("file.txt", std::ios::in);
    
    /*std::string sout(10, ' ');
    file.read(&sout[0], 10);
    std::cout << sout << "\n";
    std::cout << file.get() << "\n";

    std::string sout2;
    file >> sout2;
    std::cout << sout2 << "\n";*/

    //while (!file.eof())
    //{
    //    std::string buffer(1024, '\0');
    //    file.getline(&buffer[0], 1024);
    //    //buffer.resize(file.gcount());
    //    std::cout << buffer << "\n";

    //    /*file >> buffer;
    //    std::cout << buffer;*/
    //    /*if (buffer == "\n")
    //        std::cout << "\n";*/
    //}

    /*file.open("file.dat", std::ios::out | std::ios::binary);
    int n{ 100 };

    file << n;

    file.close();*/

    /*FILE* cfile;
    cfile = fopen("file02.dat", "w");
    int n{ 100 };

    fwrite(&n, sizeof(n), 1, cfile);
    fclose(cfile);*/

    file.open("file02.dat", std::ios::in | std::ios::binary);

    int n;
    file >> n;

    std::cout << n << "\n";

    return 0;
}
