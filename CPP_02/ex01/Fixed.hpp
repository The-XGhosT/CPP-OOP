#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

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
    Fixed(const int _value);
    Fixed(const float _input);
    float toFloat( void ) const;
    int toInt( void ) const;
    friend std::ostream & operator << (std::ostream &out, const Fixed & myFix);
};
#endif