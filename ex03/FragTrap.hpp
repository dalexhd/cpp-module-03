/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 18:53:46 by aborboll          #+#    #+#             */
/*   Updated: 2021/11/23 19:50:48 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>

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
