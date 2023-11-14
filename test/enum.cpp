#include <iostream>
#include <string>

using std::cout, std::cin, std::endl;

int main() {
    enum Numbers { one = 1, two, three, four };

    cout << Numbers::one << endl;
    
    return 0;
}
