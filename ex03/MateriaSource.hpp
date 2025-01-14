/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetit <lpetit@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 11:14:22 by lpetit            #+#    #+#             */
/*   Updated: 2025/01/08 12:40:03 by lpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria*	_learned[4];
public:
	MateriaSource();
	~MateriaSource();
	MateriaSource(const MateriaSource& to_copy);
	MateriaSource& operator=(const MateriaSource& to_copy);
	AMateria* createMateria(std::string const & type);
	void learnMateria(AMateria*);
};
#endif