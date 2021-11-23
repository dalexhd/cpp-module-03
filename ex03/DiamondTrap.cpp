/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 18:50:56 by aborboll          #+#    #+#             */
/*   Updated: 2021/11/23 20:00:47 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

//DiamondTrap constructors & destructors
DiamondTrap::DiamondTrap(void) : ClapTrap("Anonymous")
{
	std::cout << "DiamondTrap Default constructor called" << std::endl;
	this->setup();
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name)
{
	std::cout << "DiamondTrap Constructor called" << std::endl;
	this->setup();
}

DiamondTrap::DiamondTrap(const DiamondTrap &name) : ClapTrap(name)
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
	(void)target;
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
}

void		DiamondTrap::highFivesGuys()
{
	std::cout << "Let's high five!" << std::endl;
}
