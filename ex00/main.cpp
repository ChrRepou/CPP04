#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main( void )
{
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    const WrongAnimal *r = new WrongCat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << r->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    r->makeSound();
    meta->makeSound();

    delete meta;
    delete j;
    delete i;
    delete r;

    return 0;
}