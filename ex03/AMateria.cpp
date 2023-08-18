/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:01:29 by crepou            #+#    #+#             */
/*   Updated: 2023/08/18 12:56:42 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( std::string const & type )
{
	//std::cout << "AMateria constructor is called" << std::endl;
	this->type = type;
}

AMateria::AMateria( void )
{
	//std::cout << "AMateria default constructor is called" << std::endl;
}

AMateria::~AMateria( void )
{
	//std::cout << "AMateria destructor is called" << std::endl;
}

AMateria::AMateria(const AMateria& obj)
{
	//std::cout << "AMateria copy constructor is called" << std::endl;
	*this = obj;
}

AMateria& AMateria::operator=(const AMateria& obj)
{
	//std::cout << "AMateria copy assignment operator overload called" << std::endl;
    if (this != &obj)
		*this = obj;
    return (*this);
}

void AMateria::use(ICharacter& target)
{
	if (this->getType() == "ice")
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	else
		std::cout << "* heals " << target.getName() << "\'s wounds *" << std::endl;
}

std::string const & AMateria::getType() const
{
	return (this->type);
}