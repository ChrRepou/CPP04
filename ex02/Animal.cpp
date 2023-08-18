/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 13:17:48 by crepou            #+#    #+#             */
/*   Updated: 2023/08/18 13:17:49 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

void Animal::makeSound( void ) const
{
    std::cout << "mooohhhh!" << std::endl;
}

std::string Animal::getType( void ) const
{
    return (this->type);
}

void Animal::setType(std::string _type)
{
    this->type = _type;
}

Animal::Animal( std::string _type )
{
    std::cout << "Animal constructor called" << std::endl;
    this->setType(_type);
}

Animal::~Animal( void )
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal& obj)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = obj;
}

Animal& Animal::operator=(const Animal& obj)
{
    std::cout << "Animal copy assignment operator overload called" << std::endl;
    if (this != &obj)
        *this = obj;
    return (*this);
}

Animal::Animal( void ) : type("animal")
{
    std::cout << "Animal default constructor called" << std::endl;
}