#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void     randomChump(std::string name);

int main() {

	Zombie* heapZ = newZombie("Heapster");
	heapZ->announce();
	delete heapZ;


	randomChump("Stacko");

	return 0;
}
