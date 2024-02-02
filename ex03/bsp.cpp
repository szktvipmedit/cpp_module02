#include "Point.hpp"

Fixed sign(Point p1, Point p2, Point p3){
    return (p1.getX() - p3.getX()) * (p2.getY() - p3.getY()) - (p2.getX() - p3.getX()) * (p1.getY() - p3.getY());
}

bool bsp( Point const a, Point const b, Point const c, Point const point){
    bool b1, b2, b3;
    b1 = sign(point, a, b).toFloat() < 0.0f;
    b2 = sign(point, b, c).toFloat() < 0.0f;
    b3 = sign(point, c, a).toFloat() < 0.0f;
    bool onEdge = std::abs(sign(point, a, b).getRawBits()) == 0 || std::abs(sign(point, b, c).getRawBits()) == 0 || std::abs(sign(point, c, a).getRawBits()) == 0;
    // return ((b1 == b2) && (b2 == b3));
    return ((b1 == b2) && (b2 == b3)) && !onEdge;
}