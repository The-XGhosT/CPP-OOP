#include "WrongAnimal.hpp"

WrongAnimal:: WrongAnimal()
{
    std::cout << this->_type << "Constructor Called" << std::endl;
}

WrongAnimal:: ~WrongAnimal()
{
    std::cout << this->_type << "Destructor Called" << std::endl;
}

WrongAnimal:: WrongAnimal(std::string _type)
{
    this->_type = _type;
}

void WrongAnimal:: makeSound() const
{
    std::cout << "WrongAnimal sounds" << std::endl;
}

std::string  WrongAnimal:: getType() const
{
    return this->_type;
}