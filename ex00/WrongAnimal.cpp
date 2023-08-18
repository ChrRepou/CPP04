/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 13:22:03 by crepou            #+#    #+#             */
/*   Updated: 2023/08/18 13:23:27 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

void WrongAnimal::makeSound( void ) const
{
	std::cout << "wrong animal's sound!" << std::endl;
}

std::string WrongAnimal::getType( void ) const
{
	return (this->type);
}

void WrongAnimal::setType(std::string _type)
{
	this->type = _type;
}

WrongAnimal::WrongAnimal( std::string _type )
{
	std::cout << "WrongAnimal constructor called" << std::endl;
	this->setType(_type);
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = obj;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj)
{
	std::cout << "WrongAnimal copy assignment operator overload called" << std::endl;
	if (this != &obj)
		*this = obj;
	return (*this);
}

WrongAnimal::WrongAnimal( void ) : type("WrongAnimal")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}