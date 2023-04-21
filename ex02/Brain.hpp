#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <cstdlib>

class Brain {

    public:
        std::string ideas[100];
        Brain(void);
        ~Brain(void);
        Brain &operator=(Brain const &src); 
        Brain(Brain const& src);

        std::string getIdea(int index) const;
};

#endif