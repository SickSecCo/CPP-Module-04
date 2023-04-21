#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {

	protected:
		std::string type;

	public:
		Animal(void); 
		virtual ~Animal(void); 
		Animal(std::string name);
		Animal(Animal const& src); 
        Animal &operator=(Animal const &src);

		std::string getType(void) const;
		// Pure virtual function
		virtual void makeSound() const = 0;
};

#endif