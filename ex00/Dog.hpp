/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 13:21:55 by crepou            #+#    #+#             */
/*   Updated: 2023/08/18 13:23:11 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H_
#define DOG_H_

#include "Animal.hpp"

class Dog : public Animal {
	public:
		void makeSound( void ) const;
		Dog( void ); //constructor
		~Dog( void ); //destructor
};

#endif