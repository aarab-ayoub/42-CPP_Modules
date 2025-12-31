#include "Brain.hpp"

Brain::Brain() {
	for (int i = 0; i < 100; i++) {
		ideas[i] = "No idea";
	}
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &obj) {
	for (int i = 0; i < 100; i++) {
		ideas[i] = obj.ideas[i];
	}
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &obj) {
	std::cout << "Brain copy assignment operator called" << std::endl;
	if (this != &obj) {
		for (int i = 0; i < 100; i++) {
			ideas[i] = obj.ideas[i];
		}
	}
	return *this;
}

Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
}
