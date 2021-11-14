/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 18:53:46 by aborboll          #+#    #+#             */
/*   Updated: 2021/11/14 19:51:54 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>

class ScavTrap: public ClapTrap
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
