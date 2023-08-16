/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 14:18:38 by crepou            #+#    #+#             */
/*   Updated: 2023/08/16 14:46:38 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef 	BRAIN_H_
#define		BRAIN_H_

#include <iostream>

class Brain {
	private:
		std::string ideas[100];
	public:
		Brain( void ); //constructor
		~Brain( void ); //destructor
		Brain(const Brain& obj); //copy constructor
		Brain& operator=(const Brain& obj); //copy assignment operator overload
		std::string *getIdeas( void );
		void setIdea(std::string _idea, unsigned int index);
};

#endif
