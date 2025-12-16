#include "Vec2.hpp"
#include <cmath>

namespace math{
    Vec2::Vec2() : x(0.0), y(0.0) {}

    Vec2::Vec2(double x, double y) : x(x), y(y) {}

    double Vec2::length() const {
        return std::sqrt(x*x + y*y);
    }

    Vec2 Vec2::add(const Vec2& other) const {
        return Vec2(x + other.x, y + other.y);
    }

    Vec2 Vec2::scale(double s) const {
        return Vec2(x * s, y * s);
    }

    void Vec2::scale_inplace(double s) {
        x *= s;
        y *= s;
    }

    void Vec2::add_inplace(const Vec2& other) {
        x += other.x;
        y += other.y;
    }

    Vec2& Vec2::add_inplace2(const Vec2& other) {
        x += other.x;
        y += other.y;
        return *this;
    }
}