#include <iostream>

int main() {
    int a, b;
    std::cout << "Please input two integers: " << std::endl;
    std::cin >> a >> b;

    if (b < a) {
        int t = a;
        a = b;
        b = t;
    }

    while (b - a >= 0) {
        std::cout << b-- << std::endl;
    }
    return 0;
}