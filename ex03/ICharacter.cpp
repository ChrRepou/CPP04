/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 22:56:49 by crepou            #+#    #+#             */
/*   Updated: 2023/08/18 12:54:18 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter( void )
{
	//std::cout << "ICharacter constructor is called" << std::endl;
}

ICharacter::~ICharacter( void )
{
	//std::cout << "ICharacter destructor is called" << std::endl;
}

ICharacter::ICharacter(const ICharacter& obj)
{
	//std::cout << "ICharacter copy constructor is called" << std::endl;
	*this = obj;
}

ICharacter& ICharacter::operator=(const ICharacter& obj)
{
	//std::cout << "ICharacter copy assignment operator overload called" << std::endl;
    if (this != &obj)
		*this = obj;
    return (*this);
}