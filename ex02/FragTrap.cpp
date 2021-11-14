/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 18:58:44 by aborboll          #+#    #+#             */
/*   Updated: 2021/11/14 19:56:08 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

//Clap constructors & destructors
FragTrap::FragTrap(void)
{
	std::cout << "FragTrap Default constructor called" << std::endl;
	this->setName("Anonymous");
	this->setup();
	this->born();
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap Constructor called" << std::endl;
	this->setup();
	this->setName(name);
	this->born();
}

FragTrap::FragTrap(const FragTrap &name)
{
	std::cout << "FragTrap Copy constructor called." << std::endl;
	this->setup();
	*this = name;
	this->born();
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
	this->die();
}

//Clap actions
void		FragTrap::attack(std::string const & target)
{
	if (this->hasMuscles() && this->hasEnergy())
	{
		this->setEnergyPoints(this->getEnergyPoints() - 1);
		std::cout << "FragTrap " << this->getName() << " attack " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
	}
}

//Scav operators
std::ostream & operator<<(std::ostream & stream , FragTrap & scav)
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
void		FragTrap::setup()
{
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
}

void		FragTrap::highFivesGuys()
{
	std::cout << "Let's high five!" << std::endl;
}
