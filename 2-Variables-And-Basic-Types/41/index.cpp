#include <iostream>
#include <string>

struct Sales_data {
    std::string bookNo;
    unsigned unitsSold = 0;
    double revenue = 0.0;
};

// 1.5.1
// int main() {
//     std::cout << "Please enter the sales data for book one: " << std::endl;
//     Sales_data bookA, bookB;
//     int price;
//     std::cin >> bookA.bookNo >> bookA.unitsSold >> price;
//     bookA.revenue = bookA.unitsSold * price;

//     std::cout << "Please enter the sales data for book two: " << std::endl;
//     std::cin >> bookB.bookNo >> bookB.unitsSold >> price;
//     bookB.revenue = bookB.unitsSold * price;
    
//     if (bookA.bookNo != bookB.bookNo) {
//         std::cerr << "Book numbers do not match. Exiting program" << std::endl;
//         return -1;
//     }

//     std::cout << "Sum of profits: " << bookA.revenue + bookB.revenue << std::endl;
//     return 0;
// }

void printPrompt() {
    std::cout << "Please enter sales data: " << std::endl;
}

void printSum(double sum) {
    std::cout << "Sum of profits: " << sum << std::endl;
}

int main() {

    double rollingSum = 0.0, price = 0.0;
    Sales_data bookA, bookB;
    printPrompt();
    std::cin >> bookA.bookNo >> bookA.unitsSold >> price;
    rollingSum += bookA.unitsSold * price;

    printPrompt();
    while (std::cin >> bookB.bookNo) {
        if (bookB.bookNo != bookA.bookNo) {
            break;
        }

        std::cin >> bookB.unitsSold >> price;
        rollingSum += bookB.unitsSold * price;

        printPrompt();
    }

    printSum(rollingSum);
    return 0;
}