#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::string s, f1_name, f2_name;
    f1_name = "data.txt";
    f2_name = "newdata.txt";
    try {
        std::ifstream inFile(f1_name);
        std::ofstream toFile(f2_name);
        if (!inFile) throw "Can not read file";
        if (!toFile) throw "Can not create file";

        while (inFile.peek() != EOF)
        {
            getline(inFile, s);
            toFile << s << std::endl;
        }
        inFile.close();
    }
    catch (const char* error) {
        std::cout << "Error! " << error << "!" << std::endl;
        system("pause");
        return 1;
    }
    return 0;
}