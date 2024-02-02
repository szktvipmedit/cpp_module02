#ifndef __FIXED_HPP
# define __FIXED_HPP

#include <iostream>

class Fixed{
    private:
        int fixedPointNum;
        static const int fractionalBits;
    public:
        Fixed();
        Fixed(Fixed &other);
        Fixed& operator =(const Fixed &other);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

#endif