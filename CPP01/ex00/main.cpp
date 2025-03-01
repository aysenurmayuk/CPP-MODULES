#include "Zombie.hpp"

int main()
{
    Zombie zombie;
    Zombie *zombiePtr = zombie.newZombie("Damon");
    zombie.randomChump("Stefan");
    zombiePtr->announce();
    delete zombiePtr;
    return 0;
}