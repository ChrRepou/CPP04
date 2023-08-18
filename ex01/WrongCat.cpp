/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 13:21:13 by crepou            #+#    #+#             */
/*   Updated: 2023/08/18 13:21:14 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal("WrongCat")
{
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::~WrongCat( void )
{
    std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound( void ) const
{
    std::cout << "meow!" << std::endl;
}