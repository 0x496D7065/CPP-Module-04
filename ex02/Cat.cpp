#include "Cat.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetit <lpetit@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 08:02:46 by lpetit            #+#    #+#             */
/*   Updated: 2024/12/21 08:02:46 by lpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->_type = "Cat";
	_brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "meow" << std::endl;
}

Cat::Cat(const Cat &to_copy) : Animal(to_copy)
{
	if (to_copy._brain)
	{
		_brain = new Brain(*to_copy._brain);
	}
}

Cat &Cat::operator=(const Cat &to_copy)
{
	if (this != &to_copy)
	{
		if (to_copy._brain)
		{
			if (this->_brain)
				delete _brain;
			Animal::operator=(to_copy);
			_brain = new Brain(*to_copy._brain);
		}
	}
	return (*this);
}

Brain *Cat::getBrain() const
{
	return (_brain);
}

void Cat::setBrainIdeas(std::string newIdea)
{
	if (_brain)
	{
		_brain->setIdeas(newIdea);
	}
}
