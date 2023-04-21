#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal{

	private:
        Brain* attribute;
	public:
		Dog(void);
		Dog(std::string name);
		~Dog(void);
		Dog &operator=(Dog const &src);
		Dog(const Dog& src);

		Brain* getBrain(void) const;
		void makeSound(void) const;
};

#endif