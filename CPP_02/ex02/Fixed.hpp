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
    Fixed( const Fixed &c );
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    Fixed &operator=(Fixed const &c);
    Fixed(const int _value);
    Fixed(const float _input);
    float toFloat( void ) const;
    int toInt( void ) const;
    friend std::ostream & operator << (std::ostream &out, const Fixed & myFix);
    // arithmetic operators:
    Fixed operator+(const Fixed &inp) const;
    Fixed operator-(const Fixed &inp) const;
    Fixed operator*(const Fixed &inp) const;
    Fixed operator/(const Fixed &inp) const;
    // comparison operators:
    bool operator>(const Fixed &inp) const;
    bool operator<(const Fixed &inp) const;
    bool operator>=(const Fixed &inp) const;
    bool operator<=(const Fixed &inp) const;
    bool operator==(const Fixed &inp) const;
    bool operator!=(const Fixed &inp) const;
    //increment/decrement
    Fixed &operator ++ ();
    Fixed operator ++ (int);
    Fixed &operator -- ();
    Fixed operator -- (int);
    //max and min
    Fixed &max(Fixed &n1,Fixed &n2);
    Fixed &min(Fixed &n1,Fixed &n2);
    const Fixed &max(const Fixed &n1,const Fixed &n2);
    const Fixed &min(const Fixed &n1,const Fixed &n2);


};

#endif