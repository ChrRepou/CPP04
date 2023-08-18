/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 23:58:10 by crepou            #+#    #+#             */
/*   Updated: 2023/08/18 12:41:06 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H_
#define MATERIASOURCE_H_

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource {
	private:
		AMateria *memory[4];
		unsigned int idx;
	public:
		~MateriaSource(); //destructor
		MateriaSource(); //constructor
		MateriaSource(const MateriaSource& obj); //copy constructor
		MateriaSource& operator=(const MateriaSource& obj); //copy assignment operator overload
		
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
		AMateria* getMateria( unsigned int idx );
		AMateria** getMaterias( void );
};

#endif