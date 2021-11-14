/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:28:58 by aborboll          #+#    #+#             */
/*   Updated: 2021/11/14 19:55:39 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	FragTrap	anonymous;

	FragTrap	elonMusk("elonMusk");
	FragTrap	bitcoin("bitcoin");
	FragTrap	bitcoinCopy(bitcoin);

	std::cout << std::endl << elonMusk << std::endl << bitcoin << std::endl;

	elonMusk.attack("bitcoin");
	bitcoin.takeDamage(elonMusk.getAttackDamage());
	std::cout << std::endl << elonMusk << std::endl << bitcoin << std::endl;

	elonMusk.attack("etherum");

	std::cout << std::endl << bitcoin << std::endl;
	bitcoin.beRepaired(10);
	std::cout << std::endl << bitcoin << std::endl;
	anonymous.highFivesGuys();
	return (0);
}
