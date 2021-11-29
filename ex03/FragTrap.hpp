/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 18:53:46 by aborboll          #+#    #+#             */
/*   Updated: 2021/11/29 12:36:15 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>

#define FR_HIT_POINTS 100
#define FR_ENERGY_POINTS 100
#define FR_ATTACK_POINTS 30

class FragTrap: public virtual ClapTrap
{
	public:
		FragTrap(std::string name);
		FragTrap(const FragTrap &name);
		FragTrap(void);
		~FragTrap();
		//Actions
		void	attack(std::string const & target);
		//Other
		void	highFivesGuys();
		void	setup();
};

std::ostream & operator<<(std::ostream & stream , FragTrap & scav);
