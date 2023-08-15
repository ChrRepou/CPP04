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

Animal::Animal( std::string _type )
{
    std::cout << "Animal constructor called" << std::endl;
    this->setType(_type);
}

Animal::~Animal( void )
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal& obj)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = obj;
}

Animal& Animal::operator=(const Animal& obj)
{
    std::cout << "Animal copy assignment operator overload called" << std::endl;
    if (this != &obj)
        *this = obj;
    return (*this);
}

Animal::Animal( void )
{
    std::cout << "Animal default constructor called" << std::endl;
}