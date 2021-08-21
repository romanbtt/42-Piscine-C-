/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romanbtt <marvin@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 10:53:21 by romanbtt          #+#    #+#             */
/*   Updated: 2021/07/22 14:00:00 by romanbtt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )
{
	ClapTrap angelo("Angelo");
	std::cout << std::endl;
	ClapTrap will("Will");
	
	std::cout << std::endl;

	angelo.attack("Will");
	will.takeDamage(angelo.getAttackDamage());
	
	std::cout << std::endl;

	will.beRepaired(5);

	std::cout << std::endl;

	will.attack("Angelo");
	angelo.takeDamage(will.getAttackDamage());

	std::cout << std::endl;

	angelo.beRepaired(10);

	std::cout << std::endl;

	return 0;
}