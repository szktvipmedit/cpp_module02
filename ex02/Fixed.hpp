#ifndef __FIXED_HPP
# define __FIXED_HPP

#include <iostream>
#include <cmath>

// #define EPSILON 0.00390625

class Fixed{
    private:
        int fixedPointNum;
        static const int fractionalBits;
    public:
        Fixed();
        Fixed(const Fixed &other);
        Fixed(const int value);
        Fixed(const float value);
        ~Fixed();
    public:
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
        static Fixed &min(Fixed &fix1, Fixed &fix2);
        static const Fixed &min(const Fixed &fix1, const Fixed &fix2);
        static Fixed &max(Fixed &fix1, Fixed &fix2);
        static const Fixed &max(const Fixed &fix1, const Fixed &fix2);

    public:
        Fixed& operator =(const Fixed &other);
    public:
        bool operator >(const Fixed &other);
        bool operator <(const Fixed &other);
        bool operator >=(const Fixed &other);
        bool operator <=(const Fixed &other);
        bool operator ==(const Fixed &other);
        bool operator !=(const Fixed &other);
    public:
        Fixed operator +(const Fixed &other);
        Fixed operator -(const Fixed &other);
        Fixed operator *(const Fixed &other);
        Fixed operator /(const Fixed &other);
        Fixed &operator ++();
        Fixed operator ++(int);
        Fixed &operator --();
        Fixed operator --(int);
    public:
};

std::ostream& operator <<(std::ostream &out, const Fixed &other);

#endif