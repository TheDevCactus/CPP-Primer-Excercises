#include <iostream>
#include <string>
#include <vector>

int main() {
    int in;
    std::vector<int> v;
    while (std::cin >> in) {
        v.push_back(in);
    }

    for (auto i : v) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}