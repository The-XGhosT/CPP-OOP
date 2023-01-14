
#include "Dog.hpp"

Dog:: Dog() : Animal("Dog")
{ 
    this->brain = new Brain();
    std::cout << this->_type << " CONSTRUCTOR CALLED !!!" << std::endl;
}
     
Dog:: ~Dog()
{ 
    delete this->brain;
    std::cout << this->_type << " DESTRUCTOR CALLED !!!" << std::endl;
}

void Dog::makeSound() const
{ 
    std::cout << "Woooof Woooof  !!" << std::endl ;
}




