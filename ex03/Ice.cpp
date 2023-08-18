/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 16:59:47 by crepou            #+#    #+#             */
/*   Updated: 2023/08/18 12:55:05 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ) : AMateria("ice")
{
	//std::cout << "Ice constructor is called" << std::endl;
}

Ice::~Ice( void )
{
	//std::cout << "Ice destructor is called" << std::endl;
}

Ice::Ice(const Ice& obj)
{
	//std::cout << "Ice copy constructor is called" << std::endl;
	*this = obj;
}

Ice& Ice::operator=(const Ice& obj)
{
	//std::cout << "Ice copy assignment operator overload called" << std::endl;
    if (this != &obj)
		*this = obj;
    return (*this);
}

AMateria* Ice::clone() const
{
	return (new Ice());
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}