#include <iostream>
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
    int b = 2;
    cout << b << "\n";
    cout << &b << "\n";
    int* c = &b + 1;
    cout << &c << "\n";
    int** d = &c;
    (*c)++;
    // b++;
    cout << *c << "\n";
    cout << **d << "\n";
    cout << **d << "\n";
    cout << **d << "\n";
    b = 5;
    return 0;
}
