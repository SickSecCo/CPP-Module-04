#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal {

    private:
        Brain* attribute;
    public:
        Cat(void); 
        Cat(std::string name);
        ~Cat(void);
        Cat &operator=(Cat const &src); 
        Cat(Cat const& src);

		Brain* getBrain(void) const;
        void makeSound(void) const;
};

#endif