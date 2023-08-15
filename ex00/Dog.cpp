#include "Dog.hpp"

Dog::Dog( void ) : Animal("Dog")
{
    std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog( void )
{
    std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog& obj)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = obj;
}

Dog& Dog::operator=(const Dog& obj)
{
    std::cout << "Dog copy assignment operator overload called" << std::endl;
    if (this != &obj)
        *this = obj;
    return (*this);
}

void Dog::makeSound( void )
{
    std::cout << "woof!" << std::endl;
}