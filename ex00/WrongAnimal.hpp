#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {

	protected:
		std::string type;

	public:
		WrongAnimal(void);
		virtual ~WrongAnimal(void);
		WrongAnimal(std::string name);
		WrongAnimal(WrongAnimal const& src); 
        WrongAnimal &operator=(WrongAnimal const &src);

    	std::string getType(void) const;
		virtual void makeSound() const;
};

#endif