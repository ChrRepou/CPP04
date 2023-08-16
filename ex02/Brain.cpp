/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 14:18:35 by crepou            #+#    #+#             */
/*   Updated: 2023/08/16 15:24:00 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain( void )
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain& obj)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = obj;
}

Brain& Brain::operator=(const Brain& obj)
{
	std::cout << "Brain assignment operator overload called" << std::endl;
	if (this != &obj)
	{
		for(int i = 0; i < 100; i++)
			(this->getIdeas())[i] = obj.ideas[i];
	}
	return (*this);
}

std::string *Brain::getIdeas( void )
{
	return (this->ideas);
}

void Brain::setIdea(std::string _idea, unsigned int index)
{
	if (index < 100)
		this->ideas[index] = _idea;
}