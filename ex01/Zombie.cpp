#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() : name("unnamed") {}

Zombie::Zombie(std::string const& n) : name(n) {}

Zombie::~Zombie() {
	std::cout << this->name << " is destroyed 💀" << std::endl;
}

void Zombie::setName(std::string const& n) {
	this->name = n;
}

void Zombie::announce() const {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
