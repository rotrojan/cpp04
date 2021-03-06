/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rotrojan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 15:55:06 by rotrojan          #+#    #+#             */
/*   Updated: 2021/12/12 17:06:59 by bigo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.class.hpp"

Dog::Dog(void): Animal("dog")
{
	std::cout << "This animal is a dog." << std::endl;
}

Dog::Dog(Dog const &dog): Animal(dog)
{
	*this = dog;
	std::cout << "A copy of a dog of type " << this->_type
		<< " has been created." << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "A dog has been destroyed." << std::endl;
}

Dog	&Dog::operator=(Dog const &rhs)
{
	std::cout << "Dog assignation operator called." << std::endl;
	this->_type = rhs._type;
	return (*this);
}

void	Dog::make_sound(void) const
{
	std::cout << "Woof! Woof!" << std::endl;
}

std::ostream	&operator<<(std::ostream &ostream, Dog const &rhs)
{
	ostream << rhs.get_type();
	return (ostream);
}
