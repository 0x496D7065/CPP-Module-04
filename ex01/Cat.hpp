/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetit <lpetit@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 08:02:43 by lpetit            #+#    #+#             */
/*   Updated: 2024/12/22 09:14:26 by lpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain*	_brain;
public:
	Cat();
	~Cat();
	Cat(const Cat& to_copy);
	Cat&	operator=(const Cat& to_copy);
	void	makeSound() const;
	Brain*	getBrain() const;
	void	setBrainIdeas(std::string newIdea);
};

#endif