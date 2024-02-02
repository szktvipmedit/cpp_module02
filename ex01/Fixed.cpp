#include "Fixed.hpp"

const int Fixed::fractionalBits = 8;

Fixed::Fixed():fixedPointNum(0){
    std::cout<<"Default constructor called"<<std::endl;
}

Fixed::Fixed(const Fixed &other){
    std::cout<<"Copy constructor called"<<std::endl;
    // setRawBits(other.getRawBits());
    (*this) = other;
}

Fixed::Fixed(const int value): fixedPointNum(value << fractionalBits){
   std::cout<<"Int constructor called"<<std::endl;
}

Fixed::Fixed(const float value): fixedPointNum(roundf(value * (1 << fractionalBits))){
    std::cout<<"Float constructor called   "<< std::endl;
}
Fixed& Fixed::operator=(const Fixed &other){
    std::cout<<"Copy assignment operator called"<<std::endl;
    setRawBits(other.getRawBits());
    return (*this);
}

std::ostream& operator<<(std::ostream& out, const Fixed &other){
    out << other.toFloat();
    return out;
}

Fixed::~Fixed(){
    std::cout<<"Destructor called"<<std::endl;
}

int Fixed::getRawBits( void ) const{
    // std::cout<<"getRawBits member function called"<<std::endl;
    return fixedPointNum;
}

void Fixed::setRawBits( int const raw ){
    fixedPointNum = raw;
}

float Fixed::toFloat( void ) const{
    return static_cast<float>(getRawBits()) / (1 << fractionalBits);
}

int Fixed::toInt( void ) const{
    return getRawBits()/ (1 << fractionalBits);
}