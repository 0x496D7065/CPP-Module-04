/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetit <lpetit@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 07:57:44 by lpetit            #+#    #+#             */
/*   Updated: 2025/01/08 12:53:04 by lpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	this->_type = "Animal";
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal &to_copy)
{
	this->setType(to_copy._type);
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &to_copy)
{
	if (this != &to_copy)
	{
		this->setType(to_copy._type);
	}
	return (*this);
}

std::string const &Animal::getType() const
{
	return (this->_type);
}

void Animal::setType(std::string newType)
{
	this->_type = newType;
}

void Animal::makeSound() const
{
	std::cout << "Animal sound" << std::endl;
}