/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 21:05:56 by crepou            #+#    #+#             */
/*   Updated: 2023/08/17 22:49:46 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( std::string const & name )
{
	std::cout << "Character constructor is called" << std::endl;
	this->name = name;
}

Character::~Character( void )
{
	std::cout << "Character destructor is called" << std::endl;
}

Character::Character(const Character& obj)
{
	std::cout << "Character copy constructor is called" << std::endl;
	*this = obj;
}

Character& Character::operator=(const Character& obj)
{
	std::cout << "Character copy assignment operator overload called" << std::endl;
    if (this != &obj)
		*this = obj;
    return (*this);
}

std::string const & Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria* m)
{
	if (this->idx < 4)
	{
		this->inventory[this->idx] = m;
		this->idx++;
	}
	else
		std::cout << "Character: " << this->getName() << " has a full inventory!\n";
}

void Character::unequip(int idx)
{
	if (idx > -1 && idx < 4 && idx <= this->idx)
		this->inventory[idx] = NULL;
	else
		std::cout << "The index is wrong\n";
}

void Character::use(int idx, ICharacter& target)
{
	if (idx > -1 && idx < 4 && idx <= this->idx)
		this->inventory[idx]->use(target);
	else
		std::cout << "The index is wrong\n";
}