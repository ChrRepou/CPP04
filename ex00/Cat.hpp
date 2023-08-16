#ifndef CAT_H_
#define CAT_H_

#include "Animal.hpp"

class Cat : public Animal {
    public:
        void makeSound( void ) const;
        Cat( void ); //constructor
		~Cat( void ); //destructor
};

#endif