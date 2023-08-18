/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 23:56:28 by crepou            #+#    #+#             */
/*   Updated: 2023/08/18 12:54:02 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource( void )
{
	//std::cout << "IMateriaSource constructor is called" << std::endl;
}

IMateriaSource::~IMateriaSource( void )
{
	//std::cout << "IMateriaSource destructor is called" << std::endl;
}

IMateriaSource::IMateriaSource(const IMateriaSource& obj)
{
	//std::cout << "IMateriaSource copy constructor is called" << std::endl;
	*this = obj;
}

IMateriaSource& IMateriaSource::operator=(const IMateriaSource& obj)
{
	//std::cout << "IMateriaSource copy assignment operator overload called" << std::endl;
    if (this != &obj)
		*this = obj;
    return (*this);
}