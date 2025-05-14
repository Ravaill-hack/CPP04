/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 15:47:39 by lmatkows          #+#    #+#             */
/*   Updated: 2025/05/14 11:38:02 by lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"


int	main(void)
{
	const AAnimal* i = new Cat();
	const AAnimal* j = new Dog();

	delete j;//should not create a leak
	delete i;

	return (0);
}
