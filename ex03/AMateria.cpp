/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetit <lpetit@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 11:24:26 by lpetit            #+#    #+#             */
/*   Updated: 2025/01/07 12:59:42 by lpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria()
{
	this->_type = "defaultType";
}

AMateria::AMateria(std::string const &type)
{
	this->_type = type;
}

AMateria::~AMateria()
{
}

AMateria::AMateria(const AMateria &to_copy)
{
	this->_type = to_copy._type;
}

AMateria &AMateria::operator=(const AMateria &to_copy)
{
	if (this != &to_copy)
	{
	}
	return *this;
}

std::string const &AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter &target)
{
	(void) target;
	std::cout << "Wrong use AMateria use function" << std::endl;
}
