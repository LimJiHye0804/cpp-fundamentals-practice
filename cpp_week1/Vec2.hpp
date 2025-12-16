#ifndef VEC2_HPP
#define VEC2_HPP

class Vec2 {
    public:
    double x;
    double y;

    Vec2();
    Vec2(double x, double y);

    double length() const;
    Vec2 add(const Vec2& other) const;
    Vec2 scale(double s) const;
};

#endif
