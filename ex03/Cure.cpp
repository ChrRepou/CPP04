/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 16:59:33 by crepou            #+#    #+#             */
/*   Updated: 2023/08/16 17:00:43 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ) : AMateria("Cure")
{
	std::cout << "Cure constructor is called" << std::endl;
}

Cure::~Cure( void )
{
	std::cout << "Cure destructor is called" << std::endl;
}

Cure::Cure(const Cure& obj)
{
	std::cout << "Cure copy constructor is called" << std::endl;
	*this = obj;
}

Cure& Cure::operator=(const Cure& obj)
{
	std::cout << "Cure copy assignment operator overload called" << std::endl;
    if (this != &obj)
		*this = obj;
    return (*this);
}

AMateria* Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "\'s wounds *" << std::endl;
}