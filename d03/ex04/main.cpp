/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 10:04:49 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/06 10:04:50 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"
int	main() {
	FragTrap	FR4G("Zorg");

	FR4G.rangedAttack("Babar");
	FR4G.meleeAttack("Lolo");
	FR4G.takeDamage(42);
	FR4G.beRepaired(3);
	FR4G.vaulthunter_dot_exe("ours");
	FR4G.vaulthunter_dot_exe("Oui-Oui");
	FR4G.vaulthunter_dot_exe("une chevre");
	FR4G.vaulthunter_dot_exe("l'homme nu sous son trench");
	FR4G.vaulthunter_dot_exe("le colon de ta soeur");

	ScavTrap	SC4V("Gunther");

	SC4V.rangedAttack("Hans");
	SC4V.meleeAttack("Fonzie");
	SC4V.takeDamage(90);
	SC4V.beRepaired(100);
	SC4V.takeDamage(90);

	SC4V.challengeNewcomer("la schneck");
	SC4V.challengeNewcomer("la gazelle");

	NinjaTrap	N1Nj4("Francis");

	N1Nj4.rangedAttack("Albert");
	N1Nj4.meleeAttack("Marco");

	N1Nj4.ninjaShoebox(SC4V);
	N1Nj4.ninjaShoebox(FR4G);
	N1Nj4.ninjaShoebox(N1Nj4);

	SuperTrap	SUP3R("Serguei");

	SUP3R.rangedAttack("Maurice");
	SUP3R.meleeAttack("Pie");

	SUP3R.vaulthunter_dot_exe("le colon de ta soeur");
	SUP3R.ninjaShoebox(N1Nj4);

	return (0);
}