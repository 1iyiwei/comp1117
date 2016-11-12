#ifndef _POINT_HPP
#define _POINT_HPP

#include <cmath>
using namespace std;

class Point
{
public:
    Point(void);
    Point(const float x, const float y);

    float distance(const Point & another) const;

    friend bool equal(const Point & p1, const Point & p2);
    friend Point add(const Point & p1, const Point & p2);

    friend bool operator==(const Point & p1, const Point & p2);
    friend Point operator+(const Point & p1, const Point & p2);

protected:
    float _x, _y;
};

Point::Point(void)
{
    _x = _y = 0;
}

Point::Point(const float x, const float y)
{
    _x = x;
    _y = y;
}

float Point::distance(const Point & another) const
{
    return sqrt(pow((_x - another._x)*1.0, 2.0) + pow((_y - another._y)*1.0, 2.0));
}

bool equal(const Point & p1, const Point & p2)
{
    return (p1._x == p2._x) && (p1._y == p2._y);
}

Point add(const Point & p1, const Point & p2)
{
    Point p3;

    p3._x = p1._x + p2._x;
    p3._y = p1._y + p2._y;

    return p3;
}

bool operator==(const Point & p1, const Point & p2)
{
    return equal(p1, p2);
}

Point operator+(const Point & p1, const Point & p2)
{
    return add(p1, p2);
}

#endif
