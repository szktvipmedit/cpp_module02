#include "Point.hpp"

Point::Point(): x(Fixed(0)), y(Fixed(0)){}

Point::~Point(){}

Point::Point(const Point &other): x(other.x), y(other.y){}

Point::Point(const Fixed x, const Fixed y): x(x), y(y){};

void Point::operator=(const Point &other){
    const_cast<Fixed&>((this)->x) = other.x;
    const_cast<Fixed&>((this)->y) = other.y;
}

Fixed Point::getX(){
    return x;
}

Fixed Point::getY(){
    return y;
}