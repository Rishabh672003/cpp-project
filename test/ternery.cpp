#include <iostream>
#include <string>

using std::cout, std::cin, std::endl, std::string;

int main() {
    int a = 1;
    int b = 1;

    // a = b < 0 ? 10 : 5;
    a = b < 12 ? b > 12 ? 12 : 4 : 0;
    cout << a << endl;

    return 0;
}
