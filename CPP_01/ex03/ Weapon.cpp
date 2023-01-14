#include " Weapon.hpp"

void Weapon::getType()
{
    std::cout << type << std::endl;
}
void Weapon::setType(std::string name)
{
    type = name;
}