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
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &to_copy) : Animal(to_copy)
{
	std::cout << "Cat copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &to_copy)
{
	Animal::operator=(to_copy);
}

void	Dog::makeSound() const
{
	std::cout << "bark" << std::endl;
}