#ifndef CAT_H_
#define CAT_H_

#include "Animal.hpp"

class Cat : public Animal {
    public:
        void makeSound( void );
        Cat( void ); //constructor
		~Cat( void ); //destructor
		Cat(const Cat& obj); //copy constructor
		Cat& operator=(const Cat& obj); //copy assignment operator overload
};

#endif