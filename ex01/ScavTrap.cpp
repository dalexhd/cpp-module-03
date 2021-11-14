/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 18:58:44 by aborboll          #+#    #+#             */
/*   Updated: 2021/11/14 19:30:18 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

//Clap constructors & destructors
ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
	this->name = "Anonymous";
	this->setup();
	this->born();
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap Constructor called" << std::endl;
	this->setup();
	this->name = name;
	this->born();
}

ScavTrap::ScavTrap(const ScavTrap &name)
{
	std::cout << "ScavTrap Copy constructor called." << std::endl;
	this->setup();
	*this = name;
	this->born();
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
	this->die();
}

//Clap actions
void		ScavTrap::attack(std::string const & target)
{
	if (this->hasMuscles() && this->hasEnergy())
	{
		this->energy_points -= 1;
		std::cout << "ScavTrap " << this->name << " attack " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
	}
}

//Clap getters
size_t		ScavTrap::getHitPoints(void)
{
	return (this->hitpoints);
}

size_t		ScavTrap::getEnergyPoints(void)
{
	return (this->energy_points);
}

size_t		ScavTrap::getAttackDamage(void)
{
	return (this->attack_damage);
}

std::string	ScavTrap::getName(void)
{
	return (this->name);
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
	this->hitpoints = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

void		ScavTrap::guardGate()
{
	std::cout << "ScavTrap have enterred in Gate keeper mode." << std::endl;
}
