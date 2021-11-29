/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 18:53:46 by aborboll          #+#    #+#             */
/*   Updated: 2021/11/29 12:36:54 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>

#define SV_HIT_POINTS 100
#define SV_ENERGY_POINTS 50
#define SV_ATTACK_POINTS 20

class ScavTrap: public virtual ClapTrap
{
	public:
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &name);
		ScavTrap(void);
		~ScavTrap();
		//Actions
		void	attack(std::string const & target);
		//Other
		void	guardGate();
		void	setup();
};

std::ostream & operator<<(std::ostream & stream , ScavTrap & scav);
