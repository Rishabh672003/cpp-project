#include <iostream>
#include <string>

using std::cout, std::cin, std::endl;

class Player {
  public:
    Player(int x, int y) : x(x), y(y) {}
    int x, y;
    int speed = 1;

    void Move(int xa, int ya) {
        x += xa * speed;
        y += ya * speed;
    }
};

int main() {
    Player player1(2, 3);
    player1.Move(4, 5);
    cout << player1.x << " " << player1.y;

    Player player2(1, 1);
    player2.Move(1, -1);
    cout << player2.x << " " << player2.y;
    return 0;
}
