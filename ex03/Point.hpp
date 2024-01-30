#ifndef __POINT_HPP
 #define __POINT_HPP

#include "Fixed.hpp"

class Point{
    public:
        Point();
        ~Point();
        Point(const Point &other);
        Point(const Fixed x, const Fixed y);
        void operator =(const Point &other);
        Fixed getX();
        Fixed getY();
    private:
        const Fixed x;
        const Fixed y;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
#endif