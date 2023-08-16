#ifndef WRONG_CAT_H_
#define WRONG_CAT_H_

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
    public:
        void makeSound( void ) const;
        WrongCat( void ); //constructor
		~WrongCat( void ); //destructor
};

#endif