#include <iostream>
#include <string>

int main() {
    std::string strA, strB;
    std::cout << "Input string A: " << std::endl;
    std::getline(std::cin, strA);

    std::cout << "Input string B: " << std::endl;
    std::getline(std::cin, strB);

    if (strA.size() == strB.size()) {
        std::cout << "Same size!" << std::endl;
        return 0;
    }

    if (strA.size() > strB.size()) {
        std::cout << "String A is larger" << std::endl;
        return 0;
    }

    std::cout << "String B is larger" << std::endl; 
    return 0;
}