#include <iostream>
#include "Vec2.hpp"

int main() {
    Vec2 a(1.0, 2.0);
    Vec2 b(3.0, 4.0);

    Vec2 c = a.add(b);
    Vec2 d = a.scale(2.0);

    Vec2 e;

    std::cout << "c = (" << c.x << ", " << c.y << ")\n";
    std::cout << "c = (" << e.x << ", " << e.y << ")\n";
}