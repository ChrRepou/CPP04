/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 16:34:59 by crepou            #+#    #+#             */
/*   Updated: 2023/08/18 12:32:18 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H_
#define AMATERIA_H_

#include "ICharacter.hpp"

class ICharacter;

class AMateria {
	protected:
		std::string type;
		AMateria();
	public:
	AMateria(std::string const & type); //constructor
	virtual ~AMateria( void ); //destructor
	AMateria(const AMateria& obj); //copy constructor
	AMateria& operator=(const AMateria& obj); //copy assignment operator overload
	
	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif