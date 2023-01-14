        
#include "Cat.hpp"


Cat :: Cat(void) : Animal("Cat")
{
    this->brain = new Brain();
    std::cout << this->_type << " CONSTRUCTOR CALLED !!!" << std::endl;
}

Cat :: ~Cat()
{
    delete this->brain;
    std :: cout << this->_type << " DESTRUCTOR CALLED !!!" << std::endl;
}

void Cat :: makeSound() const
{
    std :: cout << "Meeeoowwww !!" << std::endl;
}