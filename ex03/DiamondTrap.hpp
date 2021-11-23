/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 18:50:59 by aborboll          #+#    #+#             */
/*   Updated: 2021/11/23 20:12:11 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <FragTrap.hpp>
#include <ScavTrap.hpp>
#include <ClapTrap.hpp>

class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		std::string	name;
	public:
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &name);
		DiamondTrap(void);
		~DiamondTrap();
		//Actions
		void	attack(std::string const & target);
		//Other
		void	highFivesGuys();
		void	setup();
};

std::ostream & operator<<(std::ostream & stream , DiamondTrap & scav);
