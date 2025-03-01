#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main()
{
    int count = 5;
    Zombie* zombie = zombieHorde(count, "Damon");
    for (int i = 0; i < count; i++)
    {
        zombie[i].announce();
    }
    delete [] zombie;
}