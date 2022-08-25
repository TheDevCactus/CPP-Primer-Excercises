#include <iostream>
#include <string>
#include "Sales_item.h"

int main() {
    Sales_item item;
    int sum = 0;
    std::string lastISBN = "";
    std::string transactionsPrintable = "";
    std::cout << "Please enter a set of Sales Items: " << std::endl;
    
    while (std::cin >> item) {
        if (lastISBN != "" && item.isbn() != lastISBN) {
            transactionsPrintable += "Number of transactions for ISBN #" + lastISBN + ": " + std::to_string(sum) + '\n';
            sum = 0;
            lastISBN = item.isbn();
        }
        if (lastISBN == "") {
            lastISBN = item.isbn();
        }
        sum++;
    }
    transactionsPrintable += "Number of transactions for ISBN #" + lastISBN + ": " + std::to_string(sum);

    std::cout << transactionsPrintable << std::endl;
    return 0;
}
