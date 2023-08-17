/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 20:54:24 by crepou            #+#    #+#             */
/*   Updated: 2023/08/17 21:12:53 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H_
#define CHARACTER_H_

#include "ICharacter.hpp"

class Character : public ICharacter {
	private:
		AMateria *inventory[4];
		std::string name;
		unsigned int idx = 0;
	public:
		Character(std::string const & name); //constructor
		~Character( void ); //destructor
		Character(const Character& obj); //copy constructor
		Character& operator=(const Character& obj); //copy assignment operator overload

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif