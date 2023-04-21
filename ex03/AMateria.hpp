#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria {

    protected:
        std::string type;

	public:
		AMateria(std::string const & type);
		AMateria();
		virtual ~AMateria(); 
		AMateria(AMateria const& src);
		AMateria& operator=(AMateria const& src);
		std::string const & getType() const;
		// Pure Virtual function that makes the class Abstract
		virtual AMateria* clone() const = 0;
		// Member function to attack a target
		virtual void use(ICharacter& target);
};

#endif