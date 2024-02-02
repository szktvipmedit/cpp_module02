#ifndef __FIXED_HPP
# define __FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
    private:
        int fixedPointNum;
        static const int fractionalBits;
    public:
        Fixed();
        Fixed(const Fixed &other);
        Fixed(const int value);
        Fixed(const float value);
        Fixed& operator =(const Fixed &other);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
};

std::ostream& operator <<(std::ostream &out, const Fixed &other);

#endif