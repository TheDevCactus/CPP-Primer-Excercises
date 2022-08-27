#include <iostream>

int main() {
    int x = 0;
    int *px;
    px = &x;
    *px += 10;
    std::cout << x << " " << px << std::endl;
    return 0;
}