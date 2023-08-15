#include "Animal.hpp"

void Animal::makeSound( void )
{
    std::cout << "mooohhhh!" << std::endl;
}

std::string Animal::getType( void )
{
    return (this->type);
}

void Animal::setType(std::string _type)
{
    this->type = _type;
}