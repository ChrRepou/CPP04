/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 13:19:39 by crepou            #+#    #+#             */
/*   Updated: 2023/08/18 13:19:40 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H_
#define DOG_H_

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	private:
		Brain *dogBrain;
    public:
        Dog( void ); //constructor
		~Dog( void ); //destructor
		Dog(const Dog& obj); //copy constructor
		Dog& operator=(const Dog& obj); //copy assignment operator overload

        void makeSound( void ) const;
		void setIdea(std::string _idea, unsigned int index);
		std::string getIdea( unsigned int index );
};

#endif