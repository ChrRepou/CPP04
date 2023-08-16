/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 16:58:42 by crepou            #+#    #+#             */
/*   Updated: 2023/08/16 16:58:43 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H_
#define ICE_H_

#include "AMateria.hpp"

class Ice: public AMateria {
	public:
		Ice( void ); //constructor
		~Ice( void ); //destructor
		Ice(const Ice& obj); //copy constructor
		Ice& operator=(const Ice& obj); //copy assignment operator overload

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif