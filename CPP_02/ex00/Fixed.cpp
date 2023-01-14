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

