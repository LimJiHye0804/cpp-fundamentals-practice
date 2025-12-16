#include <iostream>
#include "Vec2.hpp"
#include <vector>
#include <string>

std::vector<math::Vec2> points;
std::string name = "points";


int main() {
    math::Vec2 a(1.0, 2.0);
    math::Vec2 b(3.0, 4.0);

    math::Vec2 c = a.add(b);
    math::Vec2 d = a.scale(2.0);
    math::Vec2 e;

    std::cout << "c = (" << c.x << ", " << c.y << ")\n";
    std::cout << "e = (" << e.x << ", " << e.y << ")\n";

    points.emplace_back(1.0, 2.0);
    points.emplace_back(3.0, 4.0);
    points.emplace_back(5.0, 6.0);

    for (auto& p : points) 
    {
        p.scale_inplace(2.0);
        std::cout << name << " = (" << p.x << ", " << p.y <<")\n";
    }
}