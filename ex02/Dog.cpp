/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 13:18:16 by crepou            #+#    #+#             */
/*   Updated: 2023/08/18 13:18:17 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal("Dog")
{
    std::cout << "Dog constructor called" << std::endl;
	this->dogBrain = new Brain();
}

Dog::~Dog( void )
{
    std::cout << "Dog destructor called" << std::endl;
	delete this->dogBrain;
}

Dog::Dog(const Dog& obj)
{
    std::cout << "Dog copy constructor called" << std::endl;
	*this = obj;
}

Dog& Dog::operator=(const Dog& obj)
{
    std::cout << "Dog copy assignment operator overload called" << std::endl;
    if (this != &obj)
	{
		type = obj.getType();
		dogBrain = new Brain(*obj.dogBrain);
	}
    return (*this);
}

void Dog::makeSound( void ) const
{
    std::cout << "woof!" << std::endl;
}

void Dog::setIdea(std::string _idea, unsigned int index)
{
	this->dogBrain->setIdea(_idea, index);
}

std::string Dog::getIdea( unsigned int index )
{
	if(index < 100)
		return ((this->dogBrain->getIdeas())[index]);
	else
		return ("wrong index");
}