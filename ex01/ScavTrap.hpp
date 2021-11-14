/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 18:53:46 by aborboll          #+#    #+#             */
/*   Updated: 2021/11/14 19:21:02 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>

class ScavTrap: public ClapTrap
{
	private:
		std::string	name;
		size_t		hitpoints = 100;
		size_t		energy_points = 50;
		size_t		attack_damage = 20;
	public:
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &name);
		ScavTrap(void);
		~ScavTrap();
		//Actions
		void	attack(std::string const & target);
		//Getters
		size_t		getHitPoints(void);
		size_t		getEnergyPoints(void);
		size_t		getAttackDamage(void);
		std::string	getName(void);
		//Other
		void	guardGate();
		void	setup();
};

std::ostream & operator<<(std::ostream & stream , ScavTrap & scav);
