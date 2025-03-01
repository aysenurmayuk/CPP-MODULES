#include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie();
        ~Zombie();
        void announce();
        Zombie* newZombie(std::string name);
	    void randomChump(std::string name);
        void setName(std::string name);  
        std::string getName();    
};