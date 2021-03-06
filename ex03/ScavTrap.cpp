/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 18:58:44 by aborboll          #+#    #+#             */
/*   Updated: 2021/11/29 12:37:00 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

//Clap constructors & destructors
ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
	this->setup();
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap Constructor called" << std::endl;
	this->setup();
}

ScavTrap::ScavTrap(const ScavTrap &name) : ClapTrap(name)
{
	std::cout << "ScavTrap Copy constructor called." << std::endl;
	this->setup();
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

//Clap actions
void		ScavTrap::attack(std::string const & target)
{
	if (this->hasMuscles() && this->hasEnergy())
	{
		this->setEnergyPoints(this->getEnergyPoints() - 1);
		std::cout << "ScavTrap " << this->getName() << " attack " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
	}
}

//Scav operators
std::ostream & operator<<(std::ostream & stream , ScavTrap & scav)
{
	stream <<
		"\tName: " << scav.getName() << " (" << std::addressof(scav) << ")" <<
		std::endl <<
		"\tHit Points: " << scav.getHitPoints() << std::endl <<
		"\tEnergy Points: " << scav.getEnergyPoints() << std::endl <<
		"\tAttack Damage: " << scav.getAttackDamage() << std::endl;
	return stream;
}

//Other
void		ScavTrap::setup()
{
	this->setHitPoints(SV_HIT_POINTS);
	this->setEnergyPoints(SV_ENERGY_POINTS);
	this->setAttackDamage(SV_ATTACK_POINTS);
}

void		ScavTrap::guardGate()
{
	std::cout << "ScavTrap have enterred in Gate keeper mode." << std::endl;
}
