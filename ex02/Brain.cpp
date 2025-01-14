/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetit <lpetit@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 07:57:44 by lpetit            #+#    #+#             */
/*   Updated: 2024/12/21 09:00:55 by lpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain &to_copy)
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = to_copy._ideas[i];
}

Brain &Brain::operator=(const Brain &to_copy)
{
	if (this != &to_copy)
	{
		for (int i = 0; i < 100; i++)
		_ideas[i] = to_copy._ideas[i];
	}
	return (*this);
}

const std::string const &Brain::getIdeas(int index) const
{
	if (index < 0 || index >= 100)
		return ("");
	return (_ideas[index]);
}

void Brain::setIdeas(std::string newIdea)
{
	static int	i;
	if (i >= 100)
		i = 0;
	_ideas[i] = newIdea;
	i++;
}