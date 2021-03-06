/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bigo <rotrojan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 20:50:53 by bigo              #+#    #+#             */
/*   Updated: 2021/12/23 13:21:01 by bigo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_CLASS_HPP
# define ICHARACTER_CLASS_HPP
# include <iostream>
# include "AMateria.class.hpp"

class	AMateria;

class	ICharacter
{
	public:
		virtual ~ICharacter(void) {};
		virtual std::string const	&get_name() const = 0;
		virtual void				equip(AMateria *m) = 0;
		virtual void				unequip(int idx) = 0;
		virtual void				use(int idx, ICharacter& target) = 0;
};

#endif
