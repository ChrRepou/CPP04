/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 13:22:19 by crepou            #+#    #+#             */
/*   Updated: 2023/08/18 13:23:55 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_H_
#define WRONG_CAT_H_

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public:
		void makeSound( void ) const;
		WrongCat( void ); //constructor
		~WrongCat( void ); //destructor
};

#endif