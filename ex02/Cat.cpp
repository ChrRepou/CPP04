/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 13:18:05 by crepou            #+#    #+#             */
/*   Updated: 2023/08/18 13:18:06 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal("Cat")
{
    std::cout << "Cat constructor called" << std::endl;
	this->catBrain = new Brain();
}

Cat::~Cat( void )
{
    std::cout << "Cat destructor called" << std::endl;
	delete this->catBrain;
}

Cat::Cat(const Cat& obj)
{
    std::cout << "Cat copy constructor called" << std::endl;
	*this = obj;
}

Cat& Cat::operator=(const Cat& obj)
{
    std::cout << "Cat copy assignment operator overload called" << std::endl;
    if (this != &obj)
	{
		type = obj.getType();
		catBrain = new Brain(*obj.catBrain);
	}
    return (*this);
}

void Cat::makeSound( void ) const
{
    std::cout << "meow!" << std::endl;
}

void Cat::setIdea(std::string _idea, unsigned int index)
{
	this->catBrain->setIdea(_idea, index);
}

std::string Cat::getIdea( unsigned int index )
{
	if(index < 100)
		return ((this->catBrain->getIdeas())[index]);
	else
		return ("wrong index");
}