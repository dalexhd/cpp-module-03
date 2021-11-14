/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:28:58 by aborboll          #+#    #+#             */
/*   Updated: 2021/11/14 18:49:37 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	anonymous;

	ClapTrap	elonMusk("elonMusk");
	ClapTrap	bitcoin("bitcoin");
	ClapTrap	bitcoinCopy(bitcoin);

	std::cout << std::endl << elonMusk << std::endl << bitcoin << std::endl;

	elonMusk.attack("bitcoin");
	bitcoin.takeDamage(elonMusk.getAttackDamage());
	std::cout << std::endl << elonMusk << std::endl << bitcoin << std::endl;

	elonMusk.attack("etherum");

	std::cout << std::endl << bitcoin << std::endl;
	bitcoin.beRepaired(10);
	std::cout << std::endl << bitcoin << std::endl;
	return (0);
}
