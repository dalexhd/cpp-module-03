/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:29:54 by aborboll          #+#    #+#             */
/*   Updated: 2021/11/14 18:21:29 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Incluimos las librerias esenciales.
*/
#include <iostream>
#include <string.h>

class ClapTrap
{
	private:
		std::string	name;
		size_t		hitpoints = 10;
		size_t		energy_points = 10;
		size_t		attack_damage = 0;
	public:
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &name);
		ClapTrap(void);
		~ClapTrap();
		//Actions
		void		attack(std::string const & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		//Getters
		size_t		getHitPoints(void);
		size_t		getEnergyPoints(void);
		size_t		getAttackDamage(void);
		std::string	getName(void);
		//Announcements
		void		born(void);
		void		outOfFuel(void);
		void		needsGym(void);
		void		die();
		//State management
		bool		hasEnergy(void);
		bool		hasMuscles(void);
};


std::ostream & operator<<(std::ostream & stream , ClapTrap & clap);
