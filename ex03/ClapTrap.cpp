/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:47:53 by aborboll          #+#    #+#             */
/*   Updated: 2021/11/23 20:54:32 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//Clap constructors & destructors
ClapTrap::ClapTrap(void)
{
	this->name = "Anonymous";
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Constructor called" << std::endl;
	this->name = name;
}

ClapTrap::ClapTrap(const ClapTrap &name)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = name;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
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

void		ClapTrap::outOfFuel(void)
{
	std::cout << "ClapTrap " << this->name << " is out of fuel... Electricity costs are lower than fuel right? ( ???? ???? ????)" << std::endl;
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

//Clap setters
void		ClapTrap::setHitPoints(size_t num)
{
	this->hitpoints = num;
}

void		ClapTrap::setEnergyPoints(size_t num)
{
	this->energy_points = num;
}

void		ClapTrap::setAttackDamage(size_t num)
{
	this->attack_damage = num;
}

void		ClapTrap::setName(std::string name)
{
	this->name = name;
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
