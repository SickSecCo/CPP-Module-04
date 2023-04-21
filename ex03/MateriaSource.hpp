#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource: public IMateriaSource {

    private:
        AMateria* materia[4];
		int index;

    public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(MateriaSource const& src);
		MateriaSource& operator=(MateriaSource const& src);
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};

#endif