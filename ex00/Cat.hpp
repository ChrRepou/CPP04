/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 13:21:48 by crepou            #+#    #+#             */
/*   Updated: 2023/08/18 13:23:01 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H_
#define CAT_H_

#include "Animal.hpp"

class Cat : public Animal {
	public:
		void makeSound( void ) const;
		Cat( void ); //constructor
		~Cat( void ); //destructor
};

#endif