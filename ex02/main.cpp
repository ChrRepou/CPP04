#include "Dog.hpp"
#include "Cat.hpp"

//void check_leaks( void )
//{
//	system("leaks main");
//}

int main( void )
{
	//atexit(check_leaks);
	//Animal test;

	Dog basic;
    {
        Dog tmp = basic;
    }

	std::cout << "\n\n\n";

	const Animal *animals[4];

	for(int i = 0; i < 2; i++)
	{
		animals[i] = new Cat();
		std::cout << "\n";
	}

	for(int i = 2; i < 4; i++)
	{
		animals[i] = new Dog();
		std::cout << "\n";
	}

	for(int i = 0; i < 4; i++)
	{
		delete animals[i];
		std::cout << "\n";
	}

    return 0;
}