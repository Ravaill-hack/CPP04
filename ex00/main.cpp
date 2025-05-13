/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 15:47:39 by lmatkows          #+#    #+#             */
/*   Updated: 2025/05/13 16:25:19 by lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"


int	main(void)
{
	Animal	random_animal;
	Animal	wrong_cat("Cat");
	Animal	wrong_dog("Dog");
	Cat		true_cat;
	Dog		true_dog;

	random_animal.makeSound();
	wrong_cat.makeSound();
	wrong_dog.makeSound();
	true_cat.makeSound();
	true_dog.makeSound();
}
