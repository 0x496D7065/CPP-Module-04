/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetit <lpetit@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 07:56:46 by lpetit            #+#    #+#             */
/*   Updated: 2025/01/08 12:54:04 by lpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
protected:
	std::string	_type;
public:
	Animal();
	virtual ~Animal();
	Animal(const Animal& to_copy);
	Animal&	operator=(const Animal& to_copy);
	std::string const &getType() const;
	void			setType(std::string newType);
	virtual void	makeSound() const;
};

#endif