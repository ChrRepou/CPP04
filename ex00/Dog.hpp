#ifndef DOG_H_
#define DOG_H_

#include "Animal.hpp"

class Dog : public Animal {
    public:
        void makeSound( void ) const;
        Dog( void ); //constructor
		~Dog( void ); //destructor
};

#endif