/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 13:17:53 by crepou            #+#    #+#             */
/*   Updated: 2023/08/18 13:17:54 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H_
#define ANIMAL_H_

#include <iostream>

class Animal {
    protected:
        std::string type;
    public:
        virtual void makeSound( void ) const = 0; //class cant be instanciated
        std::string getType( void ) const;
        void setType(std::string _type);

        Animal( void );
        Animal( std::string _type ); //constructor
		virtual ~Animal( void ); //destructor
		Animal(const Animal& obj); //copy constructor
		Animal& operator=(const Animal& obj); //copy assignment operator overload
};

#endif