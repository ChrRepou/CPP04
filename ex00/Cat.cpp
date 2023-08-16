#include "Cat.hpp"

Cat::Cat( void ) : Animal("Cat")
{
    std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat( void )
{
    std::cout << "Cat destructor called" << std::endl;
}

// Cat::Cat(const Cat& obj)
// {
//     std::cout << "Cat copy constructor called" << std::endl;
//     *this = obj;
// }

// Cat& Cat::operator=(const Cat& obj)
// {
//     std::cout << "Cat copy assignment operator overload called" << std::endl;
//     if (this != &obj)
//         *this = obj;
//     return (*this);
// }

void Cat::makeSound( void ) const
{
    std::cout << "meow!" << std::endl;
}