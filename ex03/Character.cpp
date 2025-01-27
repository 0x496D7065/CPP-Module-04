/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetit <lpetit@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 14:27:56 by lpetit            #+#    #+#             */
/*   Updated: 2025/01/08 12:50:05 by lpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character()
{
	_name = "defaultName";
	for (int i = 0; i < 4; i++)
		_inv[i] = NULL;
}

Character::Character(std::string name)
{
	_name = name;
	for (int i = 0; i < 4; i++)
		_inv[i] = NULL;
}

Character::Character(const Character &to_copy)
{
	this->_name = to_copy._name;
	for (int i = 0; i < 4; i++)
	{
		if (to_copy._inv[i] != NULL)
		{
			this->_inv[i] = to_copy._inv[i]->clone();
		}
		else
			this->_inv[i] = NULL;
	}
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		delete _inv[i];
}

Character &Character::operator=(const Character &to_copy)
{
	this->_name = to_copy._name;
	for (int i = 0; i < 4; i++)
	{
		for (int x = 0; x < 4; x++)
			delete this->_inv[i];
		if (to_copy._inv[i] != NULL)
		{
			this->_inv[i] = to_copy._inv[i]->clone();
		}
		else
			this->_inv[i] = NULL;
	}
	return *this;
}

std::string const &Character::getName() const
{
	return (_name);
}

void Character::setName(std::string name)
{
	_name = name;
}

void Character::equip(AMateria *m)
{
	int	i = 0;
	while (i < 4)
	{
		if (this->_inv[i] == NULL)
		{
			this->_inv[i] = m;
			return ;
		}
		i++;
	}
	if (i == 4)
		std::cout << "inventory of " << this->getName() << " is full" << std::endl;
}

void Character::unequip(int idx)
{
	this->_inv[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if ((idx >= 0 && idx <= 3) && this->_inv[idx] != NULL)
	{
		this->_inv[idx]->use(target);
		return ;
	}
	std::cout << "no materia equipped in this slot" << std::endl;
}

AMateria* Character::getMateria(int idx)
{
	return (_inv[idx]);
}