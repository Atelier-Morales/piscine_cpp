/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 19:14:10 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/03 19:14:11 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"

#define HEX "0123456789ABCDEF"

Brain::Brain() {
	std::string		str;
	long			address;

	address = (long)this;
	while(address > 0)
	{
		str = HEX[(address % 16)] + str;
		address /= 16;
	}
	this->_address = "0x"+str;
	return ;
}

Brain::~Brain() {
	return ;
}

std::string	Brain::identify() const {
	return this->_address;
}