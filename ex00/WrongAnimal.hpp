/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 13:22:07 by crepou            #+#    #+#             */
/*   Updated: 2023/08/18 13:23:41 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_H_
#define WRONG_ANIMAL_H_

#include <iostream>

class WrongAnimal {
	protected:
		std::string type;
	public:
		WrongAnimal( void );
		void makeSound( void ) const;
		std::string getType( void ) const;
		void setType(std::string _type);
		WrongAnimal( std::string _type ); //constructor
		~WrongAnimal( void ); //destructor
		WrongAnimal(const WrongAnimal& obj); //copy constructor
		WrongAnimal& operator=(const WrongAnimal& obj); //copy assignment operator overload
};

#endif