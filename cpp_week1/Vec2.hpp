#ifndef VEC2_HPP
#define VEC2_HPP

namespace math{
    class Vec2 {
        public:
        double x;
        double y;

        Vec2();
        Vec2(double x, double y);

        double length() const;
        Vec2 add(const Vec2& other) const;
        Vec2 scale(double s) const;
        void scale_inplace(double s);

        // In-place addition
        void add_inplace(const Vec2& other);
        Vec2& add_inplace2(const Vec2& other);
    };
}
#endif
