/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 13:21:52 by crepou            #+#    #+#             */
/*   Updated: 2023/08/18 13:23:06 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal("Dog")
{
	std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog( void )
{
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound( void ) const
{
	std::cout << "woof!" << std::endl;
}