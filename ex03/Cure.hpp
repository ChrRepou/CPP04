/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 16:58:29 by crepou            #+#    #+#             */
/*   Updated: 2023/08/16 16:59:03 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H_
#define CURE_H_

#include "AMateria.hpp"

class Cure: public AMateria {
	public:
		Cure( void ); //constructor
		~Cure( void ); //destructor
		Cure(const Cure& obj); //copy constructor
		Cure& operator=(const Cure& obj); //copy assignment operator overload

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif