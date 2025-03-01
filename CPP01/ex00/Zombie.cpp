#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "Zombie is born!" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie is dead!" << std::endl;
}

void Zombie::announce()
{
    std::cout << getName() <<  ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
    this->name = name;
}

std::string	Zombie::getName()
{
	return (this->name);
}
