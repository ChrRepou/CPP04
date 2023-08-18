/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 13:21:43 by crepou            #+#    #+#             */
/*   Updated: 2023/08/18 13:22:54 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal("Cat")
{
	std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat( void )
{
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound( void ) const
{
	std::cout << "meow!" << std::endl;
}