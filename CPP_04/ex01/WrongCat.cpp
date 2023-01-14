        
#include "WrongCat.hpp"


WrongCat :: WrongCat(void) : WrongAnimal("WrongCat")
{
    std::cout << this->_type << " CONSTRUCTOR CALLED !!!" << std::endl;
}

WrongCat :: ~WrongCat()
{
    std :: cout << this->_type << " DESTRUCTOR CALLED !!!" << std::endl;
}

void WrongCat :: makeSound() const
{
    std :: cout << "WrongAnimal sounds" << std::endl;
}