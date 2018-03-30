/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 08:30:15 by ravard            #+#    #+#             */
/*   Updated: 2018/03/30 11:10:03 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP


#include <iostream>

class FragTrap;
typedef void(FragTrap::*randAttack)( FragTrap & target);

class FragTrap {

private:
	static randAttack const		_bank[];
	int							_hp;
	int							_hpMax;
	int							_ep;
	int							_epMax;
	int							_lvl;
	int							_meleeDmg;
	int							_rangedDmg;
	int							_armorRatio;
	std::string					_name;

	void			attack1( FragTrap & target );
	void			attack2( FragTrap & target );
	void			attack3( FragTrap & target );
	void			attack4( FragTrap & target );
	void			attack5( FragTrap & target );

public:

	FragTrap( void );
	FragTrap( std::string name );
	FragTrap( FragTrap const & src );
	~FragTrap( void );

	FragTrap &		operator=( FragTrap const & src);

	void			getValues( int *tab) const;
	std::string		getName( void ) const;
	void			meleeAttack( std::string const & target );
	void			rangedAttack( std::string const & target );
	void			takeDamage( unsigned int amount );
	void			beRepaired( unsigned int amount );
	void			vaulthunter_dot_exe(FragTrap & target);
};


#endif
