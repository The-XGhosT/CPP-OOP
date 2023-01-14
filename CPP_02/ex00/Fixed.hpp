#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
private:
    int _value;
    static const int _fractionalBits = 8;
public:
    Fixed();
    ~Fixed();
    Fixed( const Fixed &rhs );
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    Fixed &operator=(Fixed const &c);
    
};
#endif