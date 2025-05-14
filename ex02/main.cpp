/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 15:47:39 by lmatkows          #+#    #+#             */
/*   Updated: 2025/05/14 11:59:17 by lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"


int	main(void)
{
	//AAnimal k; // n marche pas c'est normal la classe est abstraite
	Dog Woufie;
	
	Woufie.makeSound();
	return (0);
}
