#ifndef ANIMAL_H_
#define ANIMAL_H_

#include <sstream>
#include <iostream>

class Animal {
    protected:
        std::string type;
    public:
        void makeSound( void );
        std::string getType( void );
        void setType(std::string _type);
};

#endif