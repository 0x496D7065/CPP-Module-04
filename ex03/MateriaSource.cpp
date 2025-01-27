/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetit <lpetit@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 11:15:09 by lpetit            #+#    #+#             */
/*   Updated: 2025/01/08 12:31:18 by lpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_learned[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete _learned[i];
}

void MateriaSource::learnMateria(AMateria* m)
{
	int	i = 0;
	while (i < 4)
	{
		if (this->_learned[i] == NULL)
		{
			this->_learned[i] = m;
			return ;
		}
		i++;
	}
	if (i == 4)
		std::cout << "This source cannot learn more materia" << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const & type)
{
	for(int i = 0; i < 4; i++)
	{
		if (_learned[i] != NULL && _learned[i]->getType() == type)
			return (_learned[i]->clone());
	}
	std::cout << "This materia has not been learned yet" << std::endl;
	return NULL;
}