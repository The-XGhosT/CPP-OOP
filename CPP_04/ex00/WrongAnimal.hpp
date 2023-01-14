#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    protected:
        std::string _type;
    public :
        std::string getType() const ;
        void makeSound() const ;
        WrongAnimal(std::string _type);
        ~WrongAnimal();
        WrongAnimal();

};

#endif