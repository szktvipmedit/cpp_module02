#include "Fixed.hpp"

const int Fixed::fractionalBits = 8;

Fixed::Fixed():fixedPointNum(0){
    std::cout<<"Default constructor called"<<std::endl;
}

Fixed::Fixed(Fixed &other){
    std::cout<<"Copy constructor called"<<std::endl;
    // fixedPointNum = other.getRawBits();
    (*this) = other;
}

Fixed& Fixed::operator=(const Fixed &other){
    std::cout<<"Copy assignment operator called"<<std::endl;
    fixedPointNum = other.getRawBits();
    return (*this);
}

Fixed::~Fixed(){
    std::cout<<"Destructor called"<<std::endl;
}

int Fixed::getRawBits( void ) const{
    std::cout<<"getRawBits member function called"<<std::endl;
    return fixedPointNum;
}

void Fixed::setRawBits( int const raw ){
    fixedPointNum = raw;
}