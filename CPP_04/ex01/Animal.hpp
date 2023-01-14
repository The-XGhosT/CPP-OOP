#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string _type;
    public :
        std::string getType() const ;
        virtual void makeSound() const ;
        Animal(std::string _type);
        virtual ~Animal();
        Animal();

};

#endif