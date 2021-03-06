/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 11:14:39 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/04 11:14:42 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef WEAPON_HPP
# define WEAPON_HPP

class Weapon
{
public:
	Weapon(std::string const &type);
	~Weapon();

	std::string	const 	&getType() const;
	void				setType(std::string type);

private:
	std::string			_type;
};

#endif
