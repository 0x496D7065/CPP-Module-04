#include "Dog.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetit <lpetit@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 08:00:09 by lpetit            #+#    #+#             */
/*   Updated: 2024/12/21 08:00:10 by lpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->_type = "Dog";
	_brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &to_copy) : Animal(to_copy)
{
	if (to_copy._brain)
	{
		_brain = new Brain(*to_copy._brain);
	}
}

Dog &Dog::operator=(const Dog &to_copy)
{
	if (this != &to_copy)
	{
		if (to_copy._brain)
		{
			delete _brain;
			Animal::operator=(to_copy);
			_brain = new Brain(*to_copy._brain);
		}
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "bark" << std::endl;
}

Brain *Dog::getBrain() const
{
	return (_brain);
}

void Dog::setBrainIdeas(std::string newIdea)
{
	if (_brain)
	{
		_brain->setIdeas(newIdea);
	}
}