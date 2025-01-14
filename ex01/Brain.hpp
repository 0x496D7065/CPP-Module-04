/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetit <lpetit@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 07:56:46 by lpetit            #+#    #+#             */
/*   Updated: 2024/12/21 09:06:54 by lpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
private:
	std::string	_ideas[100];
public:
	Brain();
	~Brain();
	Brain(const Brain& to_copy);
	Brain& operator=(const Brain& to_copy);
	const std::string const &getIdeas(int index) const;
	void				setIdeas(std::string newIdea);
};

#endif