#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {
private:
    std::string name;
public:
    Zombie(std::string const& name);   // ctor
    ~Zombie();                         // dtor

    void announce();                   // prints "<name>: BraiiiiiiinnnzzzZ..."
};

#endif
