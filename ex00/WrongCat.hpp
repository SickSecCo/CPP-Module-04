#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {

    public:
        WrongCat(void); 
        WrongCat(std::string name);
        ~WrongCat(void);
        WrongCat &operator=(WrongCat const &src); 
        WrongCat(WrongCat const& src);

        void makeSound(void) const;
};

#endif
