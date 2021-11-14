/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:47:53 by aborboll          #+#    #+#             */
/*   Updated: 2021/11/14 18:49:29 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//Clap constructors & destructors
ClapTrap::ClapTrap(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->name = "Anonymous";
	this->born();
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Constructor called" << std::endl;
	this->name = name;
	this->born();
}

ClapTrap::ClapTrap(const ClapTrap &name)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = name;
	this->born();
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
	this->die();
}

//Clap actions
void		ClapTrap::attack(std::string const & target)
{
	if (this->hasMuscles() && this->hasEnergy())
	{
		this->energy_points -= 10;
		std::cout << "ClapTrap " << this->name << " attack " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
	}
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	this->hitpoints -= amount;
	std::cout << "ClapTrap " << this->name << " takes " << amount << " amount of damage!" << std::endl;
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	this->hitpoints += amount;
	this->energy_points += amount;
	std::cout << "ClapTrap " << this->name << " is being repaired with " << amount << " amount of health!" << std::endl;
}

//Clap announcements
void		ClapTrap::born()
{
	std::cout << "ClapTrap " << this->getName() << " (" << std::addressof(*this) << ")" << " baby has born! Let's damage him, maybe... ( ͡° ͜ʖ ͡°)" << std::endl;
}

void		ClapTrap::die()
{
	std::cout << "ClapTrap " << this->getName() << " (" << std::addressof(*this) << ")" << " has died!" << std::endl;
}

void		ClapTrap::outOfFuel(void)
{
	std::cout << "ClapTrap " << this->name << " is out of fuel... Electricity costs are lower than fuel right? ( ͡° ͜ʖ ͡°)" << std::endl;
}

void		ClapTrap::needsGym(void)
{
	std::cout << "ClapTrap " << this->name << " needs gym. Healthy life is important..." << std::endl;
}


//Clap getters
size_t		ClapTrap::getHitPoints(void)
{
	return (this->hitpoints);
}

size_t		ClapTrap::getEnergyPoints(void)
{
	return (this->energy_points);
}

size_t		ClapTrap::getAttackDamage(void)
{
	return (this->attack_damage);
}

std::string	ClapTrap::getName(void)
{
	return (this->name);
}

//Clap state management
bool		ClapTrap::hasEnergy(void)
{
	bool	status;

	status = true;
	if (this->getEnergyPoints() == 0)
	{
		status = false;
		this->outOfFuel();
	}
	return (status);
}

bool		ClapTrap::hasMuscles(void)
{
	bool	status;

	status = true;
	if (this->getHitPoints() == 0)
	{
		status = false;
		this->needsGym();
	}
	return (status);
}

//Clap operators
std::ostream & operator<<(std::ostream & stream , ClapTrap & clap)
{
	stream <<
		"\tName: " << clap.getName() << " (" << std::addressof(clap) << ")" <<
		std::endl <<
		"\tHit Points: " << clap.getHitPoints() << std::endl <<
		"\tEnergy Points: " << clap.getEnergyPoints() << std::endl <<
		"\tAttack Damage: " << clap.getAttackDamage() << std::endl;
	return stream;
}
