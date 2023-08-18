/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 23:54:06 by crepou            #+#    #+#             */
/*   Updated: 2023/08/17 23:56:02 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIASOURCE_H_
#define AMATERIASOURCE_H_

#include "AMateria.hpp"

class IMateriaSource
{
	public:
		virtual ~IMateriaSource(); //destructor
		IMateriaSource(); //constructor
		IMateriaSource(const IMateriaSource& obj); //copy constructor
		IMateriaSource& operator=(const IMateriaSource& obj); //copy assignment operator overload
		
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif