// main.cpp
#include <iostream>
#include <string>

int main() {
	// 1) the original data
	std::string brain = "HI THIS IS BRAIN";

	// 2) two different ways to refer to it
	std::string* stringPTR = &brain;   // pointer
	std::string& stringREF = brain;    // reference

	// 3) print addresses
	std::cout << "Memory addresses:\n";
	std::cout << " &brain     : " << &brain     << '\n';
	std::cout << " stringPTR  : " << stringPTR  << '\n';
	std::cout << " &stringREF : " << &stringREF << "\n\n";

	// 4) print values
	std::cout << "Values:\n";
	std::cout << " brain      : " << brain      << '\n';
	std::cout << " *stringPTR : " << *stringPTR << '\n';
	std::cout << " stringREF  : " << stringREF  << std::endl;

	return 0;
}