#ifndef ICHARACTER_H_
#define ICHARACTER_H_

#include <iostream>
#include "AMateria.hpp"

class AMateria;

class ICharacter
{
	public:
		virtual ~ICharacter(); //destructor
		ICharacter(); //constructor
		ICharacter(const ICharacter& obj); //copy constructor
		ICharacter& operator=(const ICharacter& obj); //copy assignment operator overload

		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

#endif