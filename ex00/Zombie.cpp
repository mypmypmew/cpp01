#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string const& n) : name(n) {}

Zombie::~Zombie() {
	std::cout << this->name << " is destroyed 💀" << std::endl;
}

void Zombie::announce() {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
