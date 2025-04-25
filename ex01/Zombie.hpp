#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {
private:
	std::string name;

public:
	Zombie();
	Zombie(std::string const& n);
	~Zombie();

	void	setName(std::string const& n);
	void	announce() const;
};

#endif
