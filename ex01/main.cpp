/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetit <lpetit@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 08:13:00 by lpetit            #+#    #+#             */
/*   Updated: 2024/12/22 10:00:37 by lpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

/*//Ideas assignment test
int	main()
{
	Cat	a;

	a.setBrainIdeas("I'm hungry");
	std::cout << a.getBrain()->getIdeas(0) << std::endl;
	return (0);
}*/
/*//Animal Array test
int	main()
{
	Animal*	array[4];

	for (int i = 0; i < 4; i++)
	{
		if (i < 4 / 2)
			array[i] = new Cat();
		else
			array[i] = new Dog();
	}
	for (int i = 0; i<4; i++)
	{
		delete array[i];
	}
}
*/
/*//Deep copies test
int	main()
{
	Cat* a = new Cat();
	Cat* b = new Cat();

	a->setBrainIdeas("I'm hungry");
	std::cout << "a = " << a->getBrain()->getIdeas(0) << std::endl;

	*b = *a;
	std::cout << "b = " << b->getBrain()->getIdeas(0) << std::endl;
	delete a;
	delete b;
	return (0);
}*/