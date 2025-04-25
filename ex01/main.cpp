#include "Zombie.hpp"

Zombie* zombieHorde(int, std::string);

int main() {
	int const N = 5;
	Zombie* horde = zombieHorde(N, "Foo");

	if (!horde) return 1;

	for (int i = 0; i < N; ++i)
		horde[i].announce();

	delete[] horde;
	return 0;
}
