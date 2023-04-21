#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal {

    public:
        Cat(void); 
        Cat(std::string name);
        ~Cat(void);
        Cat &operator=(Cat const &src); 
        Cat(Cat const& src);

        void makeSound(void) const;
};

#endif