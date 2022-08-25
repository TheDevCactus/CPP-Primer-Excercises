#include <string>
#include <iostream>
#include "Sales_item.h"

int main() {
    std::cout << "Please enter a set of Sales Items to retrieve the sum" << std::endl;
    Sales_item sum, value;
    std::cin >> sum;

    while (std::cin >> value) {
        if (value.isbn() != sum.isbn()) {
            std::cerr << "Entered an ISBN which does not match the previously entered ISBN's. Closing program" << std::endl;
            return -1;
        }

        sum += value;
    }

    std::cout << "Sum: " << sum << std::endl;
    return 0;
}