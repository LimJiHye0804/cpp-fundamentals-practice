#include <iostream>
#include "Vec2.hpp"
#include <vector>

int main() {
    math::Vec2 a(1.0, 2.0);
    math::Vec2 b(3.0, 4.0);

    math::Vec2 c = a.add(b);
    math::Vec2 d = a.scale(2.0);
    math::Vec2 e;

    std::cout << "c = (" << c.x << ", " << c.y << ")\n";
    std::cout << "c = (" << e.x << ", " << e.y << ")\n";
}