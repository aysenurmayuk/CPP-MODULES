#include "Zombie.hpp"

Zombie::Zombie()
{
    //static int i = 1;
    std::cout << "Zombie is born!" << std::endl;
    //i++;
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << this->name << " is dead" << std::endl;
}

void Zombie::announce()
{
    std::cout << getName() <<  ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string setName)
{
    this->name = setName;
}

std::string Zombie::getName()
{
    return this->name;
}