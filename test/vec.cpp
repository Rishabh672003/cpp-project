#include <iostream>
#include <memory>
#include <string>
#include <vector>

using std::cout, std::cin, std::endl, std::string;

int func() {
    auto a = 12;
    std::vector<int> b = {1, 2, 3, 4};
    for (int it : b) {
        std::cout << it;
    }
    return a;
}

int main() {
    std::unique_ptr<int> b = std::make_unique<int>(4);
    cout << *b << "\n";
    return 0;
}
