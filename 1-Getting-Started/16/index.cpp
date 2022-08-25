#include <iostream>

int main() {
    int sum = 0, currentVal;
    while (std::cin >> currentVal) {
        sum += currentVal;
    }
    std::cout << "Sum: " << sum << std::endl;
    return 0;
}