/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetit <lpetit@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 08:00:06 by lpetit            #+#    #+#             */
/*   Updated: 2024/12/22 09:14:21 by lpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain*	_brain;
public:
	Dog();
	~Dog();
	Dog(const Dog& to_copy);
	Dog&	operator=(const Dog& to_copy);
	void	makeSound() const;
	Brain*	getBrain() const;
	void	setBrainIdeas(std::string newIdea);
};

#endif