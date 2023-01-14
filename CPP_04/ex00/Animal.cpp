#include "Animal.hpp"

Animal:: Animal()
{
    std::cout << this->_type << "constructor called" << std::endl;
}

Animal:: ~Animal()
{
    std::cout << "destructor called" << std::endl;
}

Animal:: Animal(std::string _type)
{
    this->_type = _type;
}

void Animal:: makeSound() const
{
    std::cout << "nothig" << std::endl;
}

std::string  Animal:: getType() const
{
    return this->_type;
}
