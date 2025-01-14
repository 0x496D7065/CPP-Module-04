/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetit <lpetit@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 08:13:00 by lpetit            #+#    #+#             */
/*   Updated: 2024/12/21 09:24:45 by lpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
/*
int	main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "j is a: " << j->getType() << " " << std::endl;
	std::cout << "i is a: " << i->getType() << " " << std::endl;
	std::cout << "i makes this sound: ";
	i->makeSound(); //will output the cat sound!
	std::cout << "j makes this sound: ";
	j->makeSound();
	std::cout << "meta makes this sound: ";
	meta->makeSound();
	std::cout << std::endl;
	delete i;
	delete j;
	delete meta;
	return (0);
}
*/

int	main()
{
	const WrongAnimal* j = new WrongCat();
	const WrongCat* i = new WrongCat();

	std::cout << "j is a: " << j->getType() << " " << std::endl;
	std::cout << "i is a: " << i->getType() << " " << std::endl;
	std::cout << "i makes this sound: ";
	i->makeSound(); //will output the cat sound!
	std::cout << "j makes this sound: ";
	j->makeSound();
	delete i;
	delete j;
	return (0);
}
