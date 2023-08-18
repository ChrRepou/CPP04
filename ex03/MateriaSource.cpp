/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 00:00:18 by crepou            #+#    #+#             */
/*   Updated: 2023/08/18 13:01:03 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource( void )
{
	//std::cout << "MateriaSource constructor is called" << std::endl;
	this->idx = 0;
	for (int i = 0; i < 4; i++)
		this->memory[i] = NULL;
}

MateriaSource::~MateriaSource( void )
{
	//std::cout << "MateriaSource destructor is called" << std::endl;
	for(int i = 0; i < 4; i++)
	{
		if(this->memory[i] != NULL)
			delete this->memory[i];
	}
}

MateriaSource::MateriaSource(const MateriaSource& obj)
{
	//std::cout << "MateriaSource copy constructor is called" << std::endl;
	*this = obj;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& obj)
{
	//std::cout << "MateriaSource copy assignment operator overload called" << std::endl;
    if (this != &obj)
		*this = obj;
    return (*this);
}

void MateriaSource::learnMateria(AMateria* materia)
{
	for(int i = 0; i < 4; i++)
	{
		if(this->memory[i] == NULL)
		{
			this->memory[i] = materia;
			this->idx = i;
			//std::cout << "New materia of type: " << materia->getType() << " in index: " << this->idx << std::endl;
			break;
		}
	}
}
AMateria* MateriaSource::getMateria( unsigned int idx )
{
	if (idx < 4 && idx <= this->idx)
		return (this->memory[idx]);
	return (0);
}

AMateria** MateriaSource::getMaterias( void )
{
	return (this->memory);
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	if(type != "ice" && type != "cure")
	{
		//std::cout << "The type: " << type << " is unknown!" << std::endl;
		return (0);
	}
	else
	{
		for(int i = 3; i > -1; i--)
		{
			if(getMateria(i) != 0 && getMateria(i)->getType() == type)
			{
				AMateria* newMateria;
				if(type == "ice")
					newMateria = new Ice();
				else
					newMateria = new Cure();
				return (newMateria);
			}
		}
		//std::cout << "The materia of type: " << type << " doesn't exist in the learning memory" << std::endl;
		return (0);
	}
}
