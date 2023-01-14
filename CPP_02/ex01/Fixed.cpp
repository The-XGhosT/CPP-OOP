#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout<<"Default constructor called"<< std::endl;
    this->_value = 0;
}
Fixed::~Fixed()
{
    std::cout<<"Destructor called"<< std::endl;
}

Fixed::Fixed( const Fixed &c ) {
    std::cout << "Copy constructor called" << std::endl;
    //this->setRawBits(rhs.getRawBits());
    *this = c;
}

Fixed &Fixed::operator=(Fixed const &c)
{
    std::cout << "Copy assignment operator called " << std::endl;
    this->_value = c.getRawBits();
    return(*this);
}


int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_value;
}
void Fixed::setRawBits( int const raw )
{
    this->_value = raw;
}

Fixed::Fixed(const int _input)
{
    std::cout << "Int constructor called" << std::endl;
    //this->FixedPoint = Num << FracBits;
    this->_value = _input << this->_fractionalBits;
}
Fixed::Fixed(const float _input)
{
     std::cout << "Float constructor called" << std::endl;
    _value = roundf(_input * (1 << this->_fractionalBits));
    //2.3=2.3*10 = 2 + 0.3 * 10
    //00000010.11000000
    //10.0100
}

float Fixed::toFloat( void ) const
{
    return((float)_value / (1 << this->_fractionalBits));
}
 int Fixed::toInt( void ) const
{
    return(_value >> this->_fractionalBits);
}

std::ostream & operator << (std::ostream &out, const Fixed & myFix)
{
    out << myFix.toFloat();
    return (out);
}

