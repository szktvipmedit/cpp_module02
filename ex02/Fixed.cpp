#include "Fixed.hpp"

const int Fixed::fractionalBits = 8;

Fixed::Fixed():fixedPointNum(0){
}

Fixed::Fixed(const Fixed &other){
    (*this) = other;
}

Fixed::Fixed(const int value): fixedPointNum(value << fractionalBits){
}

Fixed::Fixed(const float value): fixedPointNum(roundf(value * (1 << fractionalBits))){
}

Fixed::~Fixed(){
}

//---------------------member functions----------------------------
int Fixed::getRawBits( void ) const{
    return fixedPointNum;
}

void Fixed::setRawBits( int const raw ){
    fixedPointNum = raw;
}

float Fixed::toFloat( void ) const{
    return static_cast<float>(fixedPointNum) / (1 << fractionalBits);
}

int Fixed::toInt( void ) const{
    return fixedPointNum / (1 << fractionalBits);
}

Fixed &Fixed::min(Fixed &fix1, Fixed &fix2){
    if(fix1.fixedPointNum > fix2.fixedPointNum)
        return fix2;
    return fix1;
}
const Fixed &Fixed::min(const Fixed &fix1, const Fixed &fix2){
    if(fix1.fixedPointNum > fix2.fixedPointNum)
        return fix2;
    return fix1;
}
Fixed &Fixed::max(Fixed &fix1, Fixed &fix2){
    if(fix1.fixedPointNum > fix2.fixedPointNum)
        return fix1;
    return fix2;
}
const Fixed &Fixed::max(const Fixed &fix1, const Fixed &fix2){
    if(fix1.fixedPointNum > fix2.fixedPointNum)
        return fix1;
    return fix2;
}


Fixed& Fixed::operator=(const Fixed &other){
    fixedPointNum = other.fixedPointNum;
    return (*this);
}

std::ostream& operator<<(std::ostream& out, const Fixed &other){
    out << other.toFloat();
    return out;
}

//---------------------The 6 comparison operators--------------------------
bool Fixed::operator >(const Fixed &other){
    return fixedPointNum > other.fixedPointNum;
}
bool Fixed::operator <(const Fixed &other){
    return fixedPointNum < other.fixedPointNum;
}
bool Fixed::operator >=(const Fixed &other){
    return fixedPointNum >= other.fixedPointNum;
}
bool Fixed::operator <=(const Fixed &other){
    return fixedPointNum <= other.fixedPointNum;
}
bool Fixed::operator ==(const Fixed &other){
    return fixedPointNum == other.fixedPointNum;
}
bool Fixed::operator !=(const Fixed &other){
    return fixedPointNum != other.fixedPointNum;
}

//---------------------The 4 arithmetic operators-----------------------
Fixed Fixed::operator +(const Fixed &other){
    return Fixed(this->toFloat() + other.toFloat());
}
Fixed Fixed::operator -(const Fixed &other){
    return Fixed(this->toFloat() - other.toFloat());
}
Fixed Fixed::operator *(const Fixed &other){
    return Fixed(this->toFloat() * other.toFloat());
}
Fixed Fixed::operator /(const Fixed &other){
    return Fixed(this->toFloat() / other.toFloat());
}

//------The 4 increment/decrement (pre-increment and post-increment, pre-decrement and post-decrement) operators------
Fixed &Fixed::operator ++(){
    fixedPointNum++;
    return *this;
}
Fixed Fixed::operator ++(int){
    Fixed tmp = *this;
    fixedPointNum++;
    return tmp;
}
Fixed &Fixed::operator --(){
    fixedPointNum--;
    return *this;
}
Fixed Fixed::operator --(int){
    Fixed tmp = *this;
    fixedPointNum--;
    return tmp;
}