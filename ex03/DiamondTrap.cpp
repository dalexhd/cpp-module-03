/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 18:50:56 by aborboll          #+#    #+#             */
/*   Updated: 2021/11/29 12:38:49 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

//DiamondTrap constructors & destructors
DiamondTrap::DiamondTrap(void) : ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap Default constructor called" << std::endl;
	this->setup();
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	std::cout << "DiamondTrap Constructor called" << std::endl;
	this->setup();
}

DiamondTrap::DiamondTrap(const DiamondTrap &ref) : ClapTrap(ref.name + "_clap_name"), ScavTrap(ref), FragTrap(ref)
{
	std::cout << "DiamondTrap Copy constructor called." << std::endl;
	this->setup();
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

//Clap actions
void		DiamondTrap::attack(std::string const & target)
{
	this->ScavTrap::attack(target);
}

//Scav operators
std::ostream & operator<<(std::ostream & stream , DiamondTrap & scav)
{
	(void)scav;
	return stream;
}

//Other
void		DiamondTrap::setup()
{
	this->setHitPoints(FR_HIT_POINTS);
	this->setEnergyPoints(SV_ENERGY_POINTS);
	this->setAttackDamage(FR_ATTACK_POINTS);
}

void		DiamondTrap::highFivesGuys()
{
	std::cout << "Let's high five!" << std::endl;
}
