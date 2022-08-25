#include <iostream>
#include <string>
#include "Sales_item.h"

int main() {
    Sales_item itemA, itemB;
    std::cout << "Please enter a pair of sales items" << std::endl;
    std::cin >> itemA >> itemB;
    if (itemA.isbn() != itemB.isbn()) {
        std::cerr << "ISBN's do not match. Exiting program." << std::endl;
        return -1;
    }
    std::cout << "Sum: " << itemA + itemB << std::endl;
    return 0;
}