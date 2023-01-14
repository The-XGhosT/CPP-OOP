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
    this->_value = _input << this->_fractionalBits;
}
Fixed::Fixed(const float _input)
{
     std::cout << "Float constructor called" << std::endl;
    _value = roundf(_input * (1 << this->_fractionalBits));
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

///bianry operator

Fixed Fixed::operator+(const Fixed &inp) const
{
    Fixed res;
    res._value = this->_value + inp._value;
    return res;
}
Fixed Fixed::operator-(const Fixed &inp) const
{
    Fixed res;
    res._value = this->_value - inp._value;
    return res;
}
Fixed Fixed::operator*(const Fixed &inp) const
{
    float res_float;
    res_float = this->toFloat() * inp.toFloat();
    Fixed res(res_float);
    return res;
}
Fixed Fixed::operator/(const Fixed &inp) const
{
    float value = this->toFloat() / inp.toFloat();
    Fixed res(value);
    return res;
}

//comparison operator

bool Fixed::operator>(const Fixed &inp) const
{
    if(this->toFloat() > inp.toFloat())
        return(true);
    return(false);
}
bool Fixed::operator<(const Fixed &inp) const
{
    if(this->toFloat() < inp.toFloat())
        return(true);
    return(false);
}
bool Fixed::operator>=(const Fixed &inp) const
{
    if(this->toFloat() >= inp.toFloat())
        return(true);
    return(false);
}
bool Fixed::operator<=(const Fixed &inp) const
{
    if(this->toFloat() <= inp.toFloat())
        return(true);
    return(false);
}
bool Fixed::operator==(const Fixed &inp) const
{
    if(this->toFloat() == inp.toFloat())
        return(true);
    return(false);
}
bool Fixed::operator!=(const Fixed &inp) const
{
    if(this->toFloat() != inp.toFloat())
        return(true);
    return(false);
}

//increment/decrement

Fixed & Fixed::operator ++ ()
{
    this->_value++;
    return (*this);
}
Fixed Fixed::operator ++ (int)
{
    Fixed g;
    g = *this;
    ++(this->_value);
    return (g);
}
Fixed & Fixed::operator--()
{
    this->_value--;
    return (*this);
}
Fixed Fixed::operator--(int)
{
    Fixed g;
    g = *this;
    --(this->_value);
    return (g);
}

//min and max

Fixed &Fixed::min(Fixed &n1,Fixed &n2)
{
    if(n1._value <= n2._value)
        return(n1);
    return(n2);
}
const Fixed &Fixed::min(const Fixed &n1,const Fixed &n2)
{
    if(n1._value <= n2._value)
        return(n1);
    return(n2);
}
Fixed &Fixed::max(Fixed &n1,Fixed &n2)
{
    if(n1._value >= n2._value)
        return(n1);
    return(n2);
}
const Fixed &Fixed::max(const Fixed &n1,const Fixed &n2)
{
    if(n1._value >= n2._value)
        return(n1);
    return(n2);
}