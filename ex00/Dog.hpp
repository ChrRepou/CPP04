#ifndef DOG_H_
#define DOG_H_

#include "Animal.hpp"

class Dog : public Animal {
    public:
        void makeSound( void );
        Dog( void ); //constructor
		~Dog( void ); //destructor
		Dog(const Dog& obj); //copy constructor
		Dog& operator=(const Dog& obj); //copy assignment operator overload
};

#endif